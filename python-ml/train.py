import torch
import torch.nn as nn
import torch.optim as optim
import torchvision
import torchvision.transforms as transforms
from torch.utils.data import DataLoader

# 1. Define the CNN Model
class SimpleCNN(nn.Module):
    def __init__(self):
        super(SimpleCNN, self).__init__()
        # 1 input image channel (grayscale), 32 output channels, 3x3 kernel
        self.conv1 = nn.Conv2d(1, 32, kernel_size=3, stride=1, padding=1)
        self.relu = nn.ReLU()
        self.pool = nn.MaxPool2d(kernel_size=2, stride=2)
        # 32 input channels (from conv1), 64 output channels, 3x3 kernel
        self.conv2 = nn.Conv2d(32, 64, kernel_size=3, stride=1, padding=1)
        # After two pooling layers (28x28 -> 14x14 -> 7x7)
        # 64 channels * 7 * 7 = 3136
        self.fc1 = nn.Linear(64 * 7 * 7, 100)
        self.fc2 = nn.Linear(100, 10) # 10 output classes (digits 0-9)

    def forward(self, x):
        x = self.pool(self.relu(self.conv1(x)))
        x = self.pool(self.relu(self.conv2(x)))
        x = x.view(-1, 64 * 7 * 7) # Flatten the tensor
        x = self.relu(self.fc1(x))
        x = self.fc2(x)
        return x

# 

# 2. Set Device
# THIS IS THE KEY STEP: Check if CUDA (GPU) is available
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
print(f"--- Using device: {device} ---")

# 3. Load Data
transform = transforms.Compose(
    [transforms.ToTensor(), transforms.Normalize((0.5,), (0.5,))])

# Download and load training data
trainset = torchvision.datasets.MNIST(root='./data', train=True,
                                      download=True, transform=transform)
trainloader = DataLoader(trainset, batch_size=64, shuffle=True)

# 4. Initialize Model and Optimizer
model = SimpleCNN()
model.to(device) # !! Move the model's parameters to the GPU

criterion = nn.CrossEntropyLoss()
optimizer = optim.Adam(model.parameters(), lr=0.001)

# 5. Training Loop
print("--- Starting Training ---")
num_epochs = 3 # Keep it short for a test

for epoch in range(num_epochs):
    running_loss = 0.0
    for i, data in enumerate(trainloader, 0):
        # Get inputs; data is a list of [inputs, labels]
        inputs, labels = data
        
        # !! Move the input data and labels to the GPU
        inputs, labels = inputs.to(device), labels.to(device)

        # Zero the parameter gradients
        optimizer.zero_grad()

        # Forward pass + backward pass + optimize
        outputs = model(inputs)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()

        running_loss += loss.item()
        if i % 200 == 199:    # Print every 200 mini-batches
            print(f'[Epoch {epoch + 1}, Batch {i + 1}] loss: {running_loss / 200:.3f}')
            running_loss = 0.0

print("--- Finished Training ---")

# 6. Save the Model
model_filename = 'mnist_cnn_model.pth'
torch.save(model.state_dict(), model_filename)
print(f"Model saved to {model_filename}")
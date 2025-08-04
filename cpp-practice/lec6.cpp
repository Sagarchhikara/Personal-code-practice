#include <iostream>
using namespace std;
// class counter
// {
// private:
//     static int count;

// public:
//     counter()
//     {
//         count++;
//     }
//     static void displaycount()
//     {
//         cout << "The number of objects created: " << count << endl;
//     }
// };
// int counter::count = 0;
// int main()
// {
//     counter c1;
//     counter c2;
//     counter c3;
//     counter::displaycount();
//     return 0;
// }
// class book
// {
//     string title;
//     string author;
//     int pages;

// public:
//     book(string t, string a, int p) : title(t), author(a), pages(p) {}
//     void display() const
//     {
//         cout << "Book title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Pages: " << pages << endl;
//     }
// };
// int main()
// {
//     const book mybook("The alchemist", "Paulo coehlo", 208);
//     mybook.display();
//     return 0;
// }
// write two classes box and printer make printer a friend class of box so it can acess and print private volume of the box
// class printer;
// class box
// {
//     int length, width, height;

// public:
//     box(int l, int w, int h) : length(l), width(w), height(h) {}
//     friend class printer;
// };
// class printer
// {
// public:
//     void printvolume(const box &b)
//     {
//         int volume = b.length * b.width * b.height;
//         cout << "Voulume of the box: " << volume << endl;
//     }
// };
// int main()
// {
//     box mybox(3, 4, 5);
//     printer p;
//     p.printvolume(mybox);
//     return 0;
// }
// void printmessage()
// {
//     cout << "Hello Guys! Good morning \n";
// }
// int main()
// {
//     printmessage();
//     printmessage();
//     return 0;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }
// int subtract(int a, int b)
// {
//     return a - b;
// }
// int multiply(int a, int b)
// {
//     return a * b;
// }
// int divide(int a, int b)
// {
//     if (b == 0)
//     {
//         cout << "Error: Division by zero!" << endl;
//         return 0; // or handle error appropriately
//     }
//     return a / b;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     int result = sum(a, b);
//     cout << "Sum: " << result << endl;
//     result = subtract(a, b);
//     cout << "Subtract: " << result << endl;
//     result = multiply(a, b);
//     cout << "Multiply: " << result << endl;
//     result = divide(a, b);
//     cout << "Divide: " << result;
//     return 0;
// }
// void add(int a, int b)
// {
//     cout << "Sum: " << a + b << endl;
// }
// void subtract(int a, int b)
// {
//     cout << "Subtract: " << a - b << endl;
// }
// void multiply(int a, int b)
// {
//     cout << "Multiply: " << a * b << endl;
// }
// void divide(int a, int b)
// {
//     if (b == 0)
//     {
//         cout << "Error: Division by zero!" << endl;
//         return; // or handle error appropriately
//     }
//     cout << "Divide: " << a / b << endl;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;

//     add(a, b);
//     subtract(a, b);
//     multiply(a, b);
//     divide(a, b);
//     return 0;
// }
// void check(int x)
// {
//     x = 10;
//     cout << "Value of x inside function: " << x << endl;
// }
// int main()
// {
//     int x = 5;
//     cout << "Value of x before function call: " << x << endl;
//     check(x);
//     cout << "Value of x after function call: " << x << endl;
//     return 0;
// }
//  pass by value
// void check(int x)
// {
//     x = 10;
//     cout << "Value of x inside function: " << x << endl;
// }
// int main()
// {
//     int x = 5;
//     cout << "Value of x before function call: " << x << endl;
//     check(x);
//     cout << "Value of x after function call: " << x << endl;
//     return 0;
// }
// pass by reference
// void check(int &x)
// {
//     x = 10;
//     cout << "Value of x inside function: " << x << endl;
// }
// int main(){
//     int x = 5;
//     cout << "Value of x before function call: " << x << endl;
//     check(x);
//     cout << "Value of x after function call: " << x << endl;
//     return 0;
// }
// pass by pointer
void check(int *x)
{
    *x = 10;
    cout << "Value of x inside function: " << *x << endl;
}
int main()
{
    int x = 5;
    cout << "Value of x before function call: " << x << endl;
    check(&x);
    cout << "Value of x after function call: " << x << endl;
    return 0;
}

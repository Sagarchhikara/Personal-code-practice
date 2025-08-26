#include <iostream>
#include <vector>
#include <algorithm>
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
// void check(int *x)
// {
//     *x = 10;
//     cout << "Value of x inside function: " << *x << endl;
// }
// int main()
// {
//     int x = 5;
//     cout << "Value of x before function call: " << x << endl;
//     check(&x);
//     cout << "Value of x after function call: " << x << endl;
//     return 0;
// }
// void incrementbyvalue(int num)
// {
//     num += 10;
//     cout << "Inside function (by value): " << num << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int number = 5;
//     cout << "Before function call: " << number << endl;
//     incrementbyvalue(number);
//     cout << "After function call: " << number << endl;
//     return 0;
// }
// void incrementbyrefrence(int &num)
// {
//     num += 10;
//     cout << "Inside function(by refrence): " << num << endl;
// }
// int main()
// {
//     int number = 5;
//     cout << "Before function call: " << number << endl;
//     incrementbyrefrence(number);
//     cout << "After function call:" << number << endl;
//     return 0;
// }
// int globalvar = 100;
// int &returnreference()
// {
//     return globalvar;
// }
// int main()
// {
//     cout << "Original value: " << globalvar << endl;
//     returnreference() = 200;
//     cout << "Modified value:" << globalvar << endl;
//     int &ref = returnreference();
//     ref = 300;
//     cout << "Modified again " << globalvar << endl;
//     return 0;
// }

// Overloaded functions
//
// int main()
// {
//     // Simple lambda
//     auto greet = []()
//     {
//         cout << "Hello from lambda!" << endl;
//     };
//     greet();

//     // Lambda with parameters
//     auto add = [](int a, int b)
//     {
//         return a + b;
//     };
//     cout << "5 + 3 = " << add(5, 3) << endl;

//     // Lambda with capture
//     int x = 10;
//     auto captureExample = [x](int y)
//     {
//         cout << "Captured x: " << x << ", parameter y: " << y << endl;
//     };
//     captureExample(20);

//     // Using lambda with STL algorithm
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     cout << "Even numbers: ";
//     for_each(numbers.begin(), numbers.end(), [](int n)
//              {
//         if (n % 2 == 0) cout << n << " "; });
//     cout << endl;

//     return 0;
// }
// pointers and arrays
// int main(int argc, char const *argv[])
// {
//     int arr[3] = {1, 2, 3};
//     int *ptr = arr;
//     cout << *(ptr + 1);
//     return 0;
// }
// Empolyee payroll system wrtie a cpp program using constructor destructor and friend function constructor initalizes employee data (name and salary)a friend funstion comapres
// two salaries and destructor displays a meesage when objects are destroyed
// class empolyees
// {
//     string name;
//     int salary;

// public:
//     empolyees(string n, int m)
//     {
//         name = n;
//         salary = m;
//         cout << "Constructor called for employees" << endl;
//     }
//     ~empolyees()
//     {
//         cout << "Destructor called for employees" << endl;
//     }
//     friend void highersalary(const empolyees &e1, const empolyees &e2);
//     void display()
//     {
//         cout << "Name: " << name << " Salary: " << salary << endl;
//     }
// };

// void highersalary(const empolyees &e1, const empolyees &e2)
// {
//     if (e1.salary > e2.salary)
//     {
//         cout << e1.name << " has a higher salary." << endl;
//     }
//     else if (e1.salary < e2.salary)
//     {
//         cout << e2.name << " has a higher salary." << endl;
//     }
//     else
//     {
//         cout << "Both have equal salary." << endl;
//     }
// }

// // Example usage
// int main()
// {
//     empolyees e1("Alice", 5000);
//     empolyees e2("Bob", 6000);

//     e1.display();
//     e2.display();

//     highersalary(e1, e2);

//     return 0;
// }

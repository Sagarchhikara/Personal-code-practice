#include <iostream>
#include <memory>
using namespace std;

// class demo
// {
// public:
//     demo()
//     {
//         cout << "Constructor called";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     demo d;
//     cout << endl;
//     cout << "End of main function";
//     return 0;
// }
// Destructor demo
// class demo
// {
// public:
//     ~demo()
//     {
//         cout << "Destructor called";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     demo d;
//     cout << endl;
//     cout << "End of main function";
//     return 0;
// }
// STATIC MEMBERS
// class Demo
// {
//     static int count;
//     // Declare a static variable to count number of objects
// public:
//     Demo()
//     {
//         count++; // Increment count each time a new object is created
//     }
//     void show()
//     {
//         cout << "Count: " << count << endl;
//         // Display the current value of static count
//     }
// };
// // Define and initialize the static data member outside the class
// int Demo::count = 0;
// int main()
// {
//     Demo a; // First object is created; count becomes 1
//     Demo b; // Second object is created; count becomes 2
//     Demo c; // Third object is created; count becomes 3
//     c.show();
//     // Call show() on object c — all objects share the same static count
//     return 0; // Indicate successful program termination
// }
// STATIC OBJECT
// Function definition
// void create()
// {
//     static int x = 0; // Static variable retains its value across function calls
//     x++;              // Increment the static variable
//     cout << "x: " << x << endl;
//     // Display the value of x
// }
// int main()
// {
//     create(); // First call: x becomes 1, output -> x: 1
//     create(); // Second call: x becomes 2, output -> x: 2
//     return 0; // End of program
// }
// CONSTANT MEMBER FUNCTION
// class Demo
// {
//     int a; // Private data member to hold an integer value
// public:
//     // Constructor with an initializer list to initialize 'a' with value 'x'
//     Demo(int x) : a(x) {}
//     /* Constant member function which guarantees not to modify any class members*/
//     void show() const
//     {
//         cout << "Value: " << a << endl;
//     }
// };
// int main()
// {
//     Demo d(10);
//     /* Create an object 'd' of class Demo and initialize with value 10*/
//     d.show();
//     // Call the show() function to print the value of 'a'
//     return 0;
// }
// class Demo
// {
//     int a;

// public:
//     /* Constructor with an initializer list to initialize 'a' with value ‘x’ */
//     Demo(int x) : a(x) {}
//     /* Constant member function which guarantees not to modify any class members*/
//     void show() const
//     {
//         cout << "Value: " << a << endl;
//     }
// };
// int main()
// {
//     Demo d(10);
//     /* Create an object 'd' of class Demo and initialize with value 10*/
//     d.show();
//     // Call the show() function to print the value of 'a'
//     return 0;
// }
// class Demo
// {
//     int a = 10; // Private data member initialized to 10
//     /* Declare a friend function to allow it access to private members*/
//     friend void show(Demo); // Friend function declaration
// };
// /* Friend function definition that can access private members of class Demo */
// void show(Demo d)
// {
//     cout << "Value: " << d.a << endl;
//     // Output the value of private member 'a'
// }
// int main()
// {
//     Demo d; // Create an object of class Demo
//     show(d);
//     // Call the friend function 'show' with object 'd'
//     return 0;
// }
// class a
// {
// public:
//     a()
//     {
//         cout << "Constructor\n";
//     }
//     ~a()
//     {
//         cout << "Destructor\n";
//     }
// };
// int main()
// {
//     unique_ptr<a> A(new a());
//     return 0;
// }
// unique_ptr with custom class
// class myclass
// {
// public:
//     myclass()
//     {
//         cout << "Constructor called" << endl;
//     }
//     void display()
//     {
//         cout << "Display function called" << endl;
//     }
//     ~myclass()
//     {
//         cout << "Destructor called" << endl;
//     }
// };
// int main()
// {
//     unique_ptr<myclass> ptr(new myclass());
//     ptr->display(); // Call display function using unique_ptr
//     return 0;       // Unique_ptr will automatically call the destructor when it goes out of scope
// }
// shared pointer with custom class
// class MyClass
// {
// public:
//     MyClass()
//     {
//         cout << "Constructor called" << endl;
//     }
//     void display()
//     {
//         cout << "Display function called" << endl;
//     }
//     ~MyClass()
//     {
//         cout << "Destructor called" << endl;
//     }
// };
// int main()
// {
//     shared_ptr<MyClass> ptr1(new MyClass());
//     {
//         shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
//         shared_ptr<MyClass> ptr2 = ptr1;
//         ptr2->display();
//         ptr1->display();
//     }
//     return 0;
// }
// class calc
// {
//     int a, b;
//     char op;

// public:
//     void run()
//     {
//         cout << "Enter first number:";
//         cin >> a;
//         cout << "Enter second number:";
//         cin >> b;
//         cout << "Enter operator:";
//         cin >> op;
//         switch (op)
//         {
//         case '+':
//             cout << "Result: " << (a + b);
//             break;
//         case '-':
//             cout << "Result: " << (a - b);
//             break;
//         case '*':
//             cout << "Result: " << (a * b);
//             break;
//         case '/':
//             if (b != 0)
//                 cout << "Result: " << (a / b);
//             else
//                 cout << "Division by zero error";
//             break;
//         default:
//             cout << "Invalid operator";
//         }
//     }
// };
// int main()
// {
//     calc c;
//     c.run();
//     return 0;
// }
#include <iostream>
#include <memory>
#include <stdexcept>

using namespace std;

class Calculator
{
public:
    Calculator(double a, double b)
    {
        num1 = make_shared<double>(a);
        num2 = make_shared<double>(b);
    }

    // Set new values for the numbers
    void setNumbers(double a, double b)
    {
        *num1 = a;
        *num2 = b;
    }

    // Basic arithmetic operations
    double add() const
    {
        return *num1 + *num2;
    }

    double subtract() const
    {
        return *num1 - *num2;
    }

    double multiply() const
    {
        return *num1 * *num2;
    }

    double divide() const
    {
        if (*num2 == 0)
        {
            throw runtime_error("Division by zero error");
        }
        return *num1 / *num2;
    }

    // Display the current numbers
    void displayNumbers() const
    {
        cout << "Current numbers: " << *num1 << " and " << *num2 << endl;
    }

private:
    shared_ptr<double> num1;
    shared_ptr<double> num2;
};

int main()
{
    try
    {
        // Create a calculator with initial values
        Calculator calc(10.0, 5.0);

        cout << "Simple Calculator using shared_ptr" << endl;
        cout << "---------------------------------" << endl;

        calc.displayNumbers();

        // Perform operations
        cout << "Addition: " << calc.add() << endl;
        cout << "Subtraction: " << calc.subtract() << endl;
        cout << "Multiplication: " << calc.multiply() << endl;
        cout << "Division: " << calc.divide() << endl;

        // Change numbers and perform operations again
        calc.setNumbers(12.5, 2.5);
        cout << "\nAfter changing numbers:" << endl;
        calc.displayNumbers();

        cout << "Addition: " << calc.add() << endl;
        cout << "Subtraction: " << calc.subtract() << endl;

        // Test division by zero (will throw exception)
        // calc.setNumbers(10, 0);
        // cout << "Division: " << calc.divide() << endl;
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
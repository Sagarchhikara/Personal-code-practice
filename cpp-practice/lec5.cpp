#include <iostream>
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
class Demo
{
    int a = 10; // Private data member initialized to 10
    /* Declare a friend function to allow it access to private members*/
    friend void show(Demo); // Friend function declaration
};
/* Friend function definition that can access private members of class Demo */
void show(Demo d)
{
    cout << "Value: " << d.a << endl;
    // Output the value of private member 'a'
}
int main()
{
    Demo d; // Create an object of class Demo
    show(d);
    // Call the friend function 'show' with object 'd'
    return 0;
}

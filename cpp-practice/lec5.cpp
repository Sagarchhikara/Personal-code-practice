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
class Demo
{
    static int count;
    // Declare a static variable to count number of objects
public:
    Demo()
    {
        count++; // Increment count each time a new object is created
    }
    void show()
    {
        cout << "Count: " << count << endl;
        // Display the current value of static count
    }
};
// Define and initialize the static data member outside the class
int Demo::count = 0;
int main()
{
    Demo a; // First object is created; count becomes 1
    Demo b; // Second object is created; count becomes 2
    Demo c; // Third object is created; count becomes 3
    c.show();
    // Call show() on object c — all objects share the same static count
    return 0; // Indicate successful program termination
}

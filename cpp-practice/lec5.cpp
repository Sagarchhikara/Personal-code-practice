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
class demo
{
public:
    ~demo()
    {
        cout << "Destructor called";
    }
};
int main(int argc, char const *argv[])
{
    demo d;
    cout << endl;
    cout << "End of main function";
    return 0;
}
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
// To display multiplication table of a given number
// int main()
// {
//     int n;
//     cout << "Enter a number to print table";
//     cin >> n;
//     cout << "The table is\n";
//     for (int i = 0; i <= 10; i++)
//     {

//         cout << n << " * " << i << " = " << n * i << "\n";
//     }
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "ENter a nummber of your choice:\n";
//     cin >> n;
//     if (n > 0)
//     {
//         cout << "The number is positive\n";
//     }
//     else
//     {
//         cout << "The number is negative or origin \n";
//     }
//     return 0;
// }

// {
//     int n = 0;
//     if (n >= 0)
//     {
//         if (n == 0)
//         {
//             cout << "The number is zero\n";
//         }
//         else
//         {
//             cout << "The number is positive\n";
//         }
//     }
//     else
//     {
//         cout << "The number is negative\n";
//     }
//     return 0;
// }
// largest of two numbers
//
// largest of three numbers
{
    int a, b, c;
    cout << "Enter three numbers:\n";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << "The largest number is: " << a << "\n";
    }
    else if (b >= a && b >= c)
    {
        cout << "The largest number is: " << b << "\n";
    }
    else
    {
        cout << "The largest number is: " << c << "\n";
    }
    return 0;
}
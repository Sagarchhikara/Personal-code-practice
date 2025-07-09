// Pattern Printing
#include <iostream>
using namespace std;
int main()
// {
//     int i, j, n;
//     cout << "Enter the number of rows" << endl;
//     cin >> n;
//     for (i = 0; i <= n; i++)
//     {
//         for (j = 0; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// {
//     int n;
//     cout << "Enter the number:" << endl;
//     cin >> n;
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= 5; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
{
    int i, j, s, sp = 4;
    for (int i = 1; i <= 5; i++)
    {
        for (s = sp; s > 0; s--)
        {
            cout << " ";
        }
        for (j = i; j > 0; j--)
        {
            cout << "*";
        }
        sp--;
        cout << endl;
    }
    return 0;
}
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
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
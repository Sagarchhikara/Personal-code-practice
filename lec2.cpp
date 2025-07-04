#include <iostream>
using namespace std;
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
int main()
{
    int n1, n2, n3;
    cout << "Enter a numbers to print table:\n";
    cin >> n1;
    cout << "The table is\t The table is\n ";
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 20; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
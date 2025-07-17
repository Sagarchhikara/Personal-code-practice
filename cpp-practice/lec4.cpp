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
// {
//     int i, j, s, sp = 4;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (s = sp; s > 0; s--)
//         {
//             cout << " ";
//         }
//         for (j = i; j > 0; j--)
//         {
//             cout << "*";
//         }
//         sp--;
//         cout << endl;
//     }
//     return 0;
// }
// {
//     int n;
//     cout << "ENter the nuber:\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
// #include <stdio.h>

// {
//     int n, i, j;
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = i; j < n; j++)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= (2 * i - 1); j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (j = n; j > i; j--)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= (2 * i - 1); j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
// {
//     int n, i, j;
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
//     for (i = 1; i < n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
// }
//     {
//         for (s = sp; s > 0; s--)
//         {
//             /* code */
//             cout << " ";
//             sp--;
//         }
//         for (int j = 0; j > 0; j--)

// {
//     int n;
//     cout << "Enter the size of diamond (number of rows for upper half): ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             if (k % 2 == 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << "#";
//             }
//         }
//         cout << endl;
//     }

//     // Lower half of the diamond
//     for (int i = n - 1; i >= 1; i--)
//     {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }

//                 // Print pattern for each row
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             if (k % 2 == 1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << "#";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
// {
//     int length;
//     int width;
//     cout<<"Enter the length and width of the rectangle: ";
//     cin >> length >> width;
//     cout << "Area of the rectangle: " << length * width << endl;
//     cout << "Perimeter of the rectangle: " << 2 * (length + width) << endl;
//     return 0;
// }
// {
//     int n;
//     cout << "Enter your number: ";
//     cin >> n;
//     if (n > 10 && n < 100)
//     {
//         cout << "Number is Range.";
//     }
//     else
//     {
//         cout << "Number not in range";
//     }
//     return 0;
// }
{
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

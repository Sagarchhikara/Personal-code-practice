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
int main(int argc, char const *argv[])
{
    int n;
    cout << "ENter a nummber of your choice:\n";
    cin >> n;
    if (n > 0)
    {
        cout << "The number is positive\n";
    }
    else
    {
        cout << "The number is negative or origin \n";
    }
    return 0;
}

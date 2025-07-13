#include <iostream>
#include <conio.h>
using namespace std;
int m = 10;
int main(int argc, char const *argv[])
// {
//     int m = 20; // redclared locla to main
//     {
//         int k = m;
//         int m = 30;
//         cout << "We are inner block\n";
//         cout << "k= " << k << endl;
//         cout << "M=" << m << endl;
//         cout << "::m= " << ::m << endl;
//     }
//     cout << "/n We are in the outer block\n ";
//     cout << "M=" << m << endl;
//     cout << "::m= " << ::m << endl;
//     return 0;
// }
{
    int *arr;
    int size;
    cout << "Enter the size of the integer array: ";
    cin >> size;
    cout << "Creating an array size of size" << size << "..";
    arr = new int[size];
    cout << "\n Dynamic allocation of memory for array is sucessful.";
    delete arr;
    getch();
}
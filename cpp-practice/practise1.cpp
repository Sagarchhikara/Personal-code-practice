#include <iostream>
using namespace std;

// #include <conio.h>
// #include <iomanip>
// using namespace std;

// int main(int argc, char const *argv[])
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
// {
//     int *arr;
//     int size;
//     cout << "Enter the size of the integer array: ";
//     cin >> size;
//     cout << "Creating an array size of size" << size << "..";
//     arr = new int[size];
//     cout << "\n Dynamic allocation of memory for array is sucessful.";
//     delete arr;
//     getch();
// }
// {
//     int Basic = 950, Allowance = 95, Total = 1045;
//     cout << setw(10) << "Basic" << setw(10) << Basic << endl;
//     cout << setw(10) << "Allowance" << setw(10) << Allowance << endl;
//     cout << setw(10) << "Total" << setw(10) << Total << endl;
//     return 0;
// }
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int marks[5] = {99, 100, 200, 300};
//     int price[] = {200, 300};
//     int size = sizeof(marks) / sizeof(int); // memory of array
//     cout << marks[0] << endl;
//     cout << size << endl;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         cout << marks[i] << endl;
//     }

//     return 0;
// }
int main(int argc, char const *argv[])
{
    int nums[] = {3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (nums[i] < INT16_MAX)
        {
            smallest = nums[i];
        }
    }
    cout << "Smallest= " << smallest << endl;

    return 0;
}

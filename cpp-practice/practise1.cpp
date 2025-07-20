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
// int main(int argc, char const *argv[])
// {
//     int nums[] = {3, 4, 5, 6, 7, 8, 9};
//     int size = sizeof(nums) / sizeof(int);
//     int smallest = INT16_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         if (nums[i] < INT16_MAX)
//         {
//             smallest = nums[i];
//         }
//     }
//     cout << "Smallest= " << smallest << endl;

//     return 0;
// }
// void changearr(int arr[], int size)
// {
//     cout << "In function\n";
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         arr[i] = 2 * arr[i];
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 3};
//     changearr(arr, 3);
//     cout << "In main\n";
//     for (int i = 0; i < 3; i++)
//     {
//         /* code */
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
// int linearsearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         if (arr[i] == target)
//             return i;
//     }
//     return -1;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {4, 7, 3, 1, 2, 9};
//     int size = 6;
//     int target = 2;
//     cout << "Searching for " << target << " in the array...\n";
//     cout << linearsearch(arr, size, target);
//     return 0;
// }
// void reversearray(int arr[], int size)
// {
//     int start = 0, end = size - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void sumofarray(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "The sum is" << sum << endl;
// }

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(int);
//     // reversearray(arr, size);
//     // cout << "Reversed array: ";
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;
//     sumofarray(arr, size);
//     return 0;
// }
// SWAP MAX AND MIN OF TWO ARRAYS
void swapmaxmin(int arr[], int size)
{
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
}
int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapmaxmin(arr, size);

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
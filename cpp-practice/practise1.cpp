#include <iostream>
#include <vector>
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
//
// int main(int argc, char const *argv[])
// {
//     // vector<int> vec;
//     // vector<int> vec = {1, 2, 3};
//     // cout << vec[0] << endl;
//     // vector<int> vec(3, 0);
//     // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
//     // cout << "Size= " << vec.size() << endl;
//     // for (char val : vec)
//     // {
//     //     cout << val << endl;
//     // }
//     vector<int> vec;
//     cout << "Size= " << vec.size() << endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.pop_back();
//     cout << "After push back " << vec.size() << endl;
//     for (int i : vec)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     cout << "Soze=" << vec.size() << endl;
//     cout << "Capacity" << vec.capacity() << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int st = 0; st < n; st++)
//     {
//         for (int ed = st; ed < n; ed++)
//         {
//             for (int i = st; i <= ed; i++)
//             {
//                 /* code */
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxsum = INT16_MIN;
//     for (int st = 0; st < n; st++)
//     {
//         int currsum = 0;
//         for (int ed = st; ed < n; ed++)
//         {
//             currsum = arr[ed];
//             maxsum = max(currsum, maxsum);
//         }
//     }
//     cout << "Max=" << maxsum;
//     return 0;
// }
// vector<int> pairsum(vector<int> nums, int target)
// {
//     vector<int> ans;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
//     vector<int> ans = pairsum(nums, target);
//     cout << ans[0] << "," << ans[1] << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

// int main()
// {
//     cout << "Hello, World!" << endl;
//     cout << "This is a C++14 program." << endl;
//     return 0;
// }
// int main()
// {
//     int n = 5;
//     int arr[4] = {5, 1, 3, 2};
//     int missingNumber = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         missingNumber ^= i;
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         missingNumber ^= arr[i];
//     }
//     cout << missingNumber;
// }
// int main(){
//     int n=78;
//     if (n==0) return -1;
//     int ans=1;
//     while (n%2==0){
//         n=n>>1;
//         ans++;
//     }
//     cout<<ans;

// }
// input a number in cpp
// int main()
// {
//     int num;
//     cout << "Enter a number:";
//     cin >> num;
//     cout << "Entered number is" << num;
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int num1, num2;
//     cout << "ENter number one:";
//     cin >> num1;
//     cout << "Enter number two:";
//     cin >> num2;
//     cout << "Sum is:" << num1 + num2;
//     cout << "\nDifference is:" << num1 - num2;
//     return 0;
// }
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:\n";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible to drive\n";
    }
    else
    {
        cout << "You have to be atleast 18 to be eligible.";
    }
    return 0;
}
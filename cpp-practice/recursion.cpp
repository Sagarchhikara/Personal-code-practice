#include <iostream>
using namespace std;
// void print(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << " ";
//     print(n - 1);
// }
// int main(int argc, char const *argv[])
// {
//     print(5);
//     return 0;
// }
// factorial using recurion
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    cout << "Enter the number you want factorial of:\n";
    int a;
    cin >> a;
    int result = factorial(a);
    cout << result << endl;
    return 0;
}
#include <iostream>
using namespace std;
// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int prevsum = sum(n - 1);
//     return n + prevsum;
// }
// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevpower = power(n, p - 1);
//     return n * prevpower;
// }
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevfact = factorial(n - 1);
    return n * prevfact;
}
int main()
{
    int a = 5, b = 2;

    int result = factorial(a);
    cout << result << endl;
    return 0;
}

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
// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int prevfact = factorial(n - 1);
//     return n * prevfact;
// }

// int main()
// {
//     int a = 5, b = 2;

//     int result = factorial(a);
//     cout << result << endl;
//     return 0;
// }
int growthvalue(string func)
{
    if (func == "i")
        return 0;
    if (func == "log(n)")
        return 1;
    if (func == "n")
        return 2;
    if (func == "n logn")
        return 3;
    if (func == "n^2")
        return 4;
    if (func == "n^3")
        return 5;
    return -1;
}
int main(int argc, char const *argv[])
{
    string notation, f_n, g_n;
    cin >> notation >> f_n >> g_n;
    int f = growthvalue(f_n);

    return 0;
}

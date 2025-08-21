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
// #include <iostream>
// #include <string>
// using namespace std;

// int growthvalue(string func)
// {
//     if (func == "i")
//         return 0; // constant
//     if (func == "log(n)")
//         return 1; // logarithmic
//     if (func == "n")
//         return 2; // linear
//     if (func == "n logn")
//         return 3; // linearithmic
//     if (func == "n^2")
//         return 4; // quadratic
//     if (func == "n^3")
//         return 5; // cubic
//     return -1;    // unknown
// }

// int main(int argc, char const *argv[])
// {
//     string notation, f_n, g_n;
//     cin >> notation >> f_n >> g_n;

//     int f = growthvalue(f_n);
//     int g = growthvalue(g_n);

//     bool result = false;

//     if (notation == "O") // Big-O
//         result = (f <= g);
//     else if (notation == "o") // little-o
//         result = (f < g);
//     else if (notation == "Ω") // Big-Omega
//         result = (f >= g);
//     else if (notation == "ω") // little-omega
//         result = (f > g);
//     else if (notation == "Θ") // Theta
//         result = (f == g);

//     cout << (result ? "True" : "False") << endl;
//     return 0;
// }

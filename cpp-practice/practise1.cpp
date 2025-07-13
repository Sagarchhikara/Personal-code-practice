#include <iostream>
using namespace std;
int m = 10;
int main(int argc, char const *argv[])
{
    int m = 20; // redclared locla to main
    {
        int k = m;
        int m = 30;
        cout << "We are inner block\n";
        cout << "k= " << k << endl;
        cout << "M=" << m << endl;
        cout << "::m= " << ::m << endl;
    }
    cout << "/n We are in the outer block\n ";
    cout << "M=" << m << endl;
    cout << "::m= " << ::m << endl;
    return 0;
}

#include <iostream>
using namespace std;
class counter
{
private:
    static int count;

public:
    counter()
    {
        count++;
    }
    static void displaycount()
    {
        cout << "The number of objects created: " << count << endl;
    }
};
int counter::count = 0;
int main()
{
    counter c1;
    counter c2;
    counter c3;
    counter::displaycount();
    return 0;
}
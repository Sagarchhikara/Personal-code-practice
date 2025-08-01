#include <iostream>
using namespace std;

class Counter
{
private:
    static int count; // static data member to keep track of objects

public:
    // Constructor increments the count whenever an object is created
    Counter()
    {
        count++;
    }

    // Static function to display the count
    static void displayCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialize static data member
int Counter::count = 0;

int main()
{
    Counter c1; // 1 object
    Counter c2; // 2 objects
    Counter c3; // 3 objects

    // Display count using static function
    Counter::displayCount();

    return 0;
}

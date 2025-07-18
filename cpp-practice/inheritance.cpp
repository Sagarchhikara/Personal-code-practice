#include <iostream>
using namespace std;
class Animal
{
public:
    void sound()
    {
        cout << " Animals make sound \n";
    }
};
class dog : public Animal
{
public:
    void bark()
    {
        cout << "Dogs bark";
    }
};
int main(int argc, char const *argv[])
{
    dog d;
    d.sound();
    d.bark();
    return 0;
}

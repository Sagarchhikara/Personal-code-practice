#include <iostream>
using namespace std;
// class Animal
// {
// public:
//     void sound()
//     {
//         cout << " Animals make sound \n";
//     }
// };
// class dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dogs bark";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     dog d;
//     d.sound();
//     d.bark();
//     return 0;
// class person
// {
// public:
//     void display(/* args */)
//     {
//         cout << "I am a person\n";
//     }
// };

// class student : public person
// {
// public:
//     void show()
//     {
//         cout << "I am a student.";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     student a;
//     a.display();
//     a.show();
//     return 0;
// }
class a
{
public:
    void showa() { cout << " Class A function called\n"; }
};
class b : public a
{
public:
    void showb() { cout << " Class B function called\n"; }
};
class c : public b
{
public:
    void showc() { cout << " Class C function called\n"; }
};
int main(int argc, char const *argv[])
{
    c obj;
    obj.showa();
    obj.showb();
    obj.showc();
    return 0;
}
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
// class a
// {
// public:
//     void showa() { cout << " Class A function called\n"; }
// };
// class b : public a
// {
// public:
//     void showb() { cout << " Class B function called\n"; }
// };
// class c : public b
// {
// public:
//     void showc() { cout << " Class C function called\n"; }
// };
// int main(int argc, char const *argv[])
// {
//     c obj;
//     obj.showa();
//     obj.showb();
//     obj.showc();
//     return 0;
// }
// class a
// {
// public:
//     void showa() { cout << " Class A function called\n"; }
// };
// class b : public a
// {
// public:
//     void showb() { cout << " Class B function called\n"; }
// };
// class c : public b
// {
// public:
//     void showc() { cout << " Class C function called\n"; }
// };
// int main(int argc, char const *argv[])
// {
//     c obj;
//     obj.showa();
//     obj.showb();
//     obj.showc();
//     return 0;
// }
// Multiple Inheritance
// class A
// {
// public:
//     void showA()
//     {
//         cout << "Class A function called\n";
//     }
// };
// class B
// {
// public:
//     void showB()
//     {
//         cout << "Class B function called\n";
//     }
// };
// class C : public A, public B
// {
// public:
//     void showC()
//     {
//         cout << "Message from C\n";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     C obj;
//     obj.showA();
//     obj.showB();
//     obj.showC();
//     return 0;
// }
// private Inheritance
// class A
// {
// private:
//     void showA()
//     {
//         cout << "Private inheritance\n";
//     }
// };
// class B : private A
// {
// public:
//     void showB()
//     {
//         cout << "Class B function called\n";
//     }
//     void accessA()
//     {
//         showA(); // Accessing A's method within B
//     }
// };
// int main(int argc, char const *argv[])
// {
//     B obj;
//     obj.showB();
//     obj.accessA(); // Accessing A's method through B
//     return 0;
// }
// class vehicle
// {
// public:
//     vehicle()
//     {
//         cout << "This is a vehicle";
//     }
// };
// class car : public vehicle
// {
// public:
//     car()
//     {
//         cout << "This is a car";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     car obj;

//     return 0;
// }
// class landvehicle
// {
// public:
//     landvehicle()
//     {
//         cout << "This is a land vehicle\n";
//     }
// };
// class watervehicle
// {
// public:
//     watervehicle()
//     {
//         cout << "This is a water vehicle\n";
//     }
// };
// class amphibiousvehicle : public landvehicle, public watervehicle
// {
// public:
//     amphibiousvehicle()
//     {
//         cout << "This is an amphibious vehicle\n";
//     }
// };
// int main(int argc, char const *argv[])
// {
//     amphibiousvehicle obj;
//     return 0;
// }
// class vehicle
// {
// public:
//     vehicle()
//     {
//         cout << "This is a vehicle\n";
//     }
// };
// class fourwheeler : public vehicle
// {
// public:
//     fourwheeler()
//     {
//         cout << "This is a four wheeler\n";
//     }
// };
// class car : public fourwheeler
// {
// public:
//     car()
//     {
//         cout << "This is a car";
//     }
// };
// int main()
// {
//     car();
//     return 0;
// }
// hierarchical inheritance
// class vehicle
// {
// public:
//     vehicle()
//     {
//         cout << "This is a vehicle\n";
//     }
// };
// class car : public vehicle
// {
// public:
//     car()
//     {
//         cout << "This is a car\n";
//     }
// };

// class bus : public vehicle
// {
// public:
//     bus()
//     {
//         cout << "This is a bus\n";
//     }
// };

// int main()
// {
//     car();
//     bus();
//     return 0;
// }
// hybrid inheritance

// // Base class
// class Vehicle
// {
// public:
//     Vehicle()
//     {
//         cout << "This is a Vehicle\n";
//     }
// };

// // First derived class (single inheritance)
// class Car : public Vehicle
// {
// public:
//     Car()
//     {
//         cout << "This is a Car\n";
//     }
// };

// // Second base class
// class Brand
// {
// public:
//     Brand()
//     {
//         cout << "This is a Brand\n";
//     }
// };

// // Derived class with multiple inheritance (hybrid)
// class SportsCar : public Car, public Brand
// {
// public:
//     SportsCar()
//     {
//         cout << "This is a Sports Car\n";
//     }
// };

// int main()
// {
//     SportsCar obj;
//     return 0;
// }

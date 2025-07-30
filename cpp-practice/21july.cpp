// #include <iostream>
// using namespace std;
// namespace banking {
//     void display() {
//         cout <<"Banking system display" << endl;
//     }
// namespace shopping {
//     void display() {
//         cout <<"Shopping cart display"<< endl;
//     }
// }
// int main() {
//     banking::display();
//     shopping::display();
// }
// }

// 1. nested namespace
// #include <iostream>
// namespace app
// {
//     namespace banking
//     {
//         void greet()
//         {
//             std::cout << "Welcome to the Banking App!" << std::endl;
//         }
//     }
// }
// int main()
// {
//     app::banking::greet();
//     return 0;
// }

// 2. Namespace aliasing
// to avoid typing long names repeatedly

// 4 types of constructor
// -- 1. default
// -- 2. parameter
// -- 3. copy
// -- 4. move

// when user does not provide default constructor .. cpp compiler provide one

// #include <iostream>
// using namespace std;
// class student
// {
//     void A()
//     {
//         int studentId;
//         string name;
//         string department;
//     }
// };
// int main()
// {
//     A a1;
//     student s1(1, "ajay", "CSE");
//     s1.show();
//     return 0;
// }

#include <iostream>
using namespace std;

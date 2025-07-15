#include <iostream>
using namespace std;
// struct student
// {
//     /* data */
//     string name;
//     int marks[4];
//     float total;
//     float average;
//     char grade;
// };
// int main()
// {
//     student students[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "\n Enter the details of the students\n";
//         cout << "Enter the name of the student " << i + 1 << endl;
//         cin >> students[i].name;

//         students[i].total = 0;
//         cout << "Enter the marks of 4 subjects:\n";
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "Subject " << j + 1 << endl;
//             cin >> students[i].marks[j];
//             students[i].total += students[i].marks[j];
//         }
//         students[i].average = students[i].total / 4.0f;
//         // Assign grade
//         if (students[i].average >= 90)
//             students[i].grade = 'A';
//         else if (students[i].average >= 80)
//             students[i].grade = 'B';
//         else if (students[i].average >= 70)
//             students[i].grade = 'C';
//         else if (students[i].average >= 60)
//             students[i].grade = 'D';
//         else
//             students[i].grade = 'F';
//     }

//     // Display results
//     cout << "\n-------- RESULTS --------\n";
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "\nStudent " << i + 1 << " Details:";
//         cout << "\nName: " << students[i].name;
//         cout << "\nTotal Marks: " << students[i].total;
//         cout << "\nAverage: " << students[i].average;
//         cout << "\nGrade: " << students[i].grade << endl;
//     }

//     return 0;
// }
// Wap a program to accept employee id employee name designation salary calculate Da 5 % hra 8 %  and grosssalary of 5 employees
//          ----- CLass In c -------
class box
{
public:
    int l, w;
    int area()
    {
        return l * w;
    }
}; // Added missing semicolon after class definition

int main()
{
    box b1; // Correct object declaration
    b1.l = 10;
    b1.w = 12;
    cout << "Area: " << b1.area() << endl; // Call area() using object b1
    return 0;                              // Fixed typo 'reutn' to 'return'
}
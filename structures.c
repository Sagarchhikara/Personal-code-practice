#include <stdio.h>
struct class
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct class s1 = {1, "John", 90.5};
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
}

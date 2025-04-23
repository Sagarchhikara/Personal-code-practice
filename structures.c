#include <stdio.h>
// struct class
// // {
//     int rollno;
//     char name[20];
//     float marks;
// };
// int main()
// {
//     struct class s1 = {1, "John", 90.5};
//     printf("Roll No: %d\n", s1.rollno);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %.2f\n", s1.marks);
// }
// program to read and write data of all the students in a class
// struct class
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// int main(){
//     struct class s1[5];
//     int i;
//     FILE *fp;
//     fp = fopen("students.txt", "w");
//     if(fp == NULL){
//         printf("Error opening file!\n");
//         return 1;
//     }
//     for(i=0; i<5; i++){
//         printf("Enter roll no, name and marks of student %d: ", i+1);
//         scanf("%d %s %f", &s1[i].rollno, s1[i].name, &s1[i].marks);
//         fprintf(fp, "%d %s %.2f\n", s1[i].rollno, s1[i].name, s1[i].marks);
//     }
//     fclose(fp);
//     return 0;
// }

// enter records of 5 students using array of structures 
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s[5];
    int i;
    FILE *fp;
    fp = fopen("students.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    for(i=0; i<5; i++){
        printf("Enter roll no, name and marks of student %d: ", i+1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
        fprintf(fp, "%d %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
    }
    fclose(fp);
    return 0;
}

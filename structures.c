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
// struct student
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// int main()
// {
//     struct student s[5];
//     int i;
//     FILE *fp;
//     fp = fopen("students.txt", "w");
//     if(fp == NULL){
//         printf("Error opening file!\n");
//         return 1;
//     }
//     for(i=0; i<5; i++){
//         printf("Enter roll no, name and marks of student %d: ", i+1);
//         scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
//         fprintf(fp, "%d %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
//     }
//     fclose(fp);
//     return 0;
// }

// copy the contents of one structure to another
// #include <stdio.h>
// #include <string.h>
// struct student {
//     int roll;
//     char name[50];
//     float marks;
// };
// struct student st2;
// struct student st1 = {1, "Sagar Chhikara", 90};

// int main() {
//     st2 = st1;
//     printf("Roll: %d\n", st2.roll);
//     return 0;
// }
// define a structure vehicle to store vehicle number,its model and per day rental then calculate the total rental cost for n days and display the details of the vehicle

// struct vehicle {
//     char vno[20];
//     char model[20];
//     float rental;
// };
// int main() {
//     struct vehicle v;
//     int days,n;
//     float total_rental;
//     printf("Enter number of vehicles: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Enter vehicle number: ");
//         scanf("%s", v.vno);
//         printf("Enter model: ");
//         scanf("%s", v.model);
//         printf("Enter per day rental: ");
//         scanf("%f", &v.rental);
//     }
//     printf("Enter number of days: ");
//     scanf("%d", &days);
//     total_rental = v.rental * days;
//     printf("Vehicle Number: %s\n", v.vno);
//     printf("Model: %s\n", v.model);
//     printf("Total Rental Cost for %d days: %.2f\n", days, total_rental);
//     return 0;
// }


#include <stdio.h>

struct vehicle {
    char vno[20];
    char model[20];
    float rental;
};

int main() {
    int n, days, choice;
    float total_rental;
    
    printf("Enter number of vehicles: ");
    scanf("%d", &n);
    
    // Create an array of vehicle structures
    struct vehicle vehicles[n];
    
    // Input data for all vehicles
    for(int i = 0; i < n; i++) {
        printf("\nVehicle %d:\n", i+1);
        printf("Enter vehicle number: ");
        scanf("%s", vehicles[i].vno);
        printf("Enter model: ");
        scanf("%s", vehicles[i].model);
        printf("Enter per day rental: ");
        scanf("%f", &vehicles[i].rental);
    }
    
    // Display all vehicles and let user choose one
    printf("\nAvailable Vehicles:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. Vehicle Number: %s, Model: %s, Per Day Rental: %.2f\n", 
               i+1, vehicles[i].vno, vehicles[i].model, vehicles[i].rental);
    }
    
    printf("\nEnter the vehicle number (1-%d) you want to rent: ", n);
    scanf("%d", &choice);
    
    // Validate choice
    if(choice < 1 || choice > n) {
        printf("Invalid vehicle selection!\n");
        return 1;
    }
    
    // Adjust index (user enters 1-based, array is 0-based)
    choice--;
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    // Calculate total rental for selected vehicle
    total_rental = vehicles[choice].rental * days;
    
    // Display rental information for selected vehicle
    printf("\nRental Information:\n");
    printf("Vehicle Number: %s\n", vehicles[choice].vno);
    printf("Model: %s\n", vehicles[choice].model);
    printf("Total Rental Cost for %d days: %.2f\n", days, total_rental);
    
    return 0;
}
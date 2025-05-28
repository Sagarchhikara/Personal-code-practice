#include <stdio.h>
// int main()
// {
//     int n,bonus;
//     int total=0;
//     printf("Enter No of days:\n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("Enter hours of Day %d:",i);
//         scanf("%d",&bonus);
//         total+=bonus;
//     }
//     printf("Total=%d",total);
//     return 0;
// }
// static int total_overtime = 0;
// // Function to track employee overtime hours
// void trackOvertime(int hours)
// {
//     // Static variable to retain overtime hours across function calls
//     total_overtime += hours; // Update total overtime
// }
// // Function to return the total overtime hours
// int getTotalOvertime()
// {
//     extern int total_overtime; // Accessing static variable
//     return total_overtime;
// }

// int main()
// {
//     int N, hours;
//     int total = 0;

//     // Read the number of days overtime was recorded
//     scanf("%d", &N);

//     // Process each day's overtime hours
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &hours);
//         trackOvertime(hours);
//         total += hours;
//     }

//     // Print final total overtime hours
//     printf("%d\n", total);

//     return 0;
// }
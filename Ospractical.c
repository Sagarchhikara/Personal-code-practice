// #include <stdio.h>
// #include <stdbool.h>
// #define P 5 // number of processes
// #define R 3 // number of resources

// int Available[R] = {3, 3, 2};
// int Max[P][R] = {{7, 5, 3},
//                 {3, 2, 2},
//                 {9, 0, 2},
//                 {2, 2, 2},
//                 {4, 3, 3}};
// int Allocation[P][R] = {{0, 1, 0},
//                         {2, 0, 0},
//                         {3, 0, 2},
//                         {2, 1, 1},
//                         {0, 0, 2}};
// int Need[P][R];
// void calculateNeed()
// {
//     for (int i = 0; i < P; i++)
//     {
//         for (int j = 0; j < R; j++)
//         {
//             Need[i][j] = Max[i][j] - Allocation[i][j];
//         }
//     }
// }
// bool isSafe()
// {
//     int work[R];
//     bool finish[P] = {0};
//     int safeSeq[P];
//     int count = 0;

//     for (int i = 0; i < R; i++)
//     {
//         work[i] = Available[i];
//     }

//     while (count < P)
//     {
//         bool found = false;
//         for (int p = 0; p < P; p++)
//         {
//             if (!finish[p])
//             {
//                 bool canExecute = true;
//                 for (int r = 0; r < R; r++)
//                 {
//                     if (Need[p][r] > work[r])
//                     {
//                         canExecute = false;
//                         break;
//                     }
//                 }

//                 if (canExecute)
//                 {
//                     for (int r = 0; r < R; r++)
//                     {
//                         work[r] += Allocation[p][r];
//                     }
//                     safeSeq[count++] = p;
//                     finish[p] = true;
//                     found = true;
//                 }
//             }
//         }

//         if (!found)
//         {
//             return false; // System is not in a safe state
//         }
//     }

//     printf("Safe sequence is: ");
//     for (int i = 0; i < P; i++)
//     {
//         printf("P%d ", safeSeq[i]);
//     }
//     printf("\n");
//     return true;
// }
// int main()
// {
//     calculateNeed();

//     if (isSafe())
//     {
//         printf("System is in a safe state.\n");
//     }
//     else
//     {
//         printf("System is in an unsafe state.\n");
//     }

//     return 0;
// }

#include <stdio.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;
};

void sortByArrival(struct Process p[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(p[j].arrival_time > p[j+1].arrival_time) {
                struct Process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for(int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter arrival time and burst time for P%d: ", p[i].pid);
        scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
    }

    sortByArrival(p, n);

    int current_time = 0;
    for(int i = 0; i < n; i++) {
        if(current_time < p[i].arrival_time)
            current_time = p[i].arrival_time;

        p[i].completion_time = current_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        current_time = p[i].completion_time;
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
               p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
    }

    return 0;
}

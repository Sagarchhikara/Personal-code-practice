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

// #include <stdio.h>

// struct Process {
//     int pid;
//     int arrival_time;
//     int burst_time;
//     int completion_time;
//     int waiting_time;
//     int turnaround_time;
// };

// void sortByArrival(struct Process p[], int n) {
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(p[j].arrival_time > p[j+1].arrival_time) {
//                 struct Process temp = p[j];
//                 p[j] = p[j+1];
//                 p[j+1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     struct Process p[n];

//     for(int i = 0; i < n; i++) {
//         p[i].pid = i + 1;
//         printf("Enter arrival time and burst time for P%d: ", p[i].pid);
//         scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
//     }

//     sortByArrival(p, n);

//     int current_time = 0;
//     for(int i = 0; i < n; i++) {
//         if(current_time < p[i].arrival_time)
//             current_time = p[i].arrival_time;

//         p[i].completion_time = current_time + p[i].burst_time;
//         p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
//         p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

//         current_time = p[i].completion_time;
//     }

//     printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
//     for(int i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
//                p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>

// struct Process {
//     int pid;
//     int arrival_time;
//     int burst_time;
//     int completion_time;
//     int waiting_time;
//     int turnaround_time;
//     bool is_completed;
// };

// int main() {
//     int n, completed = 0, current_time = 0;
//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     struct Process p[n];

//     for (int i = 0; i < n; i++) {
//         p[i].pid = i + 1;
//         printf("Enter arrival time and burst time for P%d: ", p[i].pid);
//         scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
//         p[i].is_completed = false;
//     }

//     while (completed != n) {
//         int idx = -1;
//         int min_bt = 9999;

//         for (int i = 0; i < n; i++) {
//             if (p[i].arrival_time <= current_time && !p[i].is_completed) {
//                 if (p[i].burst_time < min_bt) {
//                     min_bt = p[i].burst_time;
//                     idx = i;
//                 }
//             }
//         }

//         if (idx != -1) {
//             p[idx].completion_time = current_time + p[idx].burst_time;
//             p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
//             p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
//             p[idx].is_completed = true;
//             current_time = p[idx].completion_time;
//             completed++;
//         } else {
//             current_time++; // if no process has arrived yet
//         }
//     }

//     printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
//     for (int i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
//                p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <limits.h>

// struct Process {
//     int pid;
//     int arrival_time;
//     int burst_time;
//     int remaining_time;
//     int completion_time;
//     int turnaround_time;
//     int waiting_time;
// };

// int main() {
//     int n;
//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     struct Process p[n];
//     int completed = 0, current_time = 0;
//     float total_tat = 0, total_wt = 0;

//     for (int i = 0; i < n; i++) {
//         p[i].pid = i + 1;
//         printf("Enter arrival time and burst time for P%d: ", p[i].pid);
//         scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
//         p[i].remaining_time = p[i].burst_time;
//     }

//     while (completed != n) {
//         int idx = -1;
//         int min_rt = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             if (p[i].arrival_time <= current_time && p[i].remaining_time > 0) {
//                 if (p[i].remaining_time < min_rt) {
//                     min_rt = p[i].remaining_time;
//                     idx = i;
//                 }
//             }
//         }

//         if (idx != -1) {
//             p[idx].remaining_time--;
//             current_time++;

//             if (p[idx].remaining_time == 0) {
//                 p[idx].completion_time = current_time;
//                 p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
//                 p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
//                 total_tat += p[idx].turnaround_time;
//                 total_wt += p[idx].waiting_time;
//                 completed++;
//             }
//         } else {
//             current_time++; // no process is ready, just time passing
//         }
//     }

//     printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
//     for (int i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
//                p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
//     }

//     printf("\nAvg TAT = %.2f\n", total_tat / n);
//     printf("Avg WT  = %.2f\n", total_wt / n);

//     return 0;
// }
// #include <stdio.h>

// struct Process {
//     int pid;
//     int arrival_time;
//     int burst_time;
//     int priority;
//     int completion_time;
//     int turnaround_time;
//     int waiting_time;
//     int is_completed;
// };

// int main() {
//     int n, completed = 0, current_time = 0;
//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     struct Process p[n];

//     for (int i = 0; i < n; i++) {
//         p[i].pid = i + 1;
//         printf("Enter arrival time, burst time, and priority for P%d: ", p[i].pid);
//         scanf("%d %d %d", &p[i].arrival_time, &p[i].burst_time, &p[i].priority);
//         p[i].is_completed = 0;
//     }

//     while (completed != n) {
//         int idx = -1;
//         int highest_priority = 9999;

//         for (int i = 0; i < n; i++) {
//             if (p[i].arrival_time <= current_time && !p[i].is_completed) {
//                 if (p[i].priority < highest_priority) {
//                     highest_priority = p[i].priority;
//                     idx = i;
//                 }
//             }
//         }

//         if (idx != -1) {
//             current_time += p[idx].burst_time;
//             p[idx].completion_time = current_time;
//             p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
//             p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
//             p[idx].is_completed = 1;
//             completed++;
//         } else {
//             current_time++;
//         }
//     }

//     printf("\nPID\tAT\tBT\tPR\tCT\tTAT\tWT\n");
//     for (int i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
//                p[i].priority, p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
//     }

//     return 0;
// }
// RR scheduling 
#include <stdio.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

int main() {
    int n, tq, time = 0, completed = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter arrival time and burst time for P%d: ", p[i].pid);
        scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
        p[i].remaining_time = p[i].burst_time;
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    int queue[100], front = 0, rear = 0;
    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;

    queue[rear++] = 0;
    visited[0] = 1;

    while (completed < n) {
        int idx = queue[front++];
        if (p[idx].remaining_time > 0) {
            if (p[idx].remaining_time > tq) {
                time += tq;
                p[idx].remaining_time -= tq;
            } else {
                time += p[idx].remaining_time;
                p[idx].remaining_time = 0;
                p[idx].completion_time = time;
                p[idx].turnaround_time = time - p[idx].arrival_time;
                p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
                completed++;
            }

            // Enqueue newly arrived processes
            for (int i = 0; i < n; i++) {
                if (i != idx && !visited[i] && p[i].arrival_time <= time) {
                    queue[rear++] = i;
                    visited[i] = 1;
                }
            }

            // Re-enqueue current process if not done
            if (p[idx].remaining_time > 0)
                queue[rear++] = idx;
        }

        // If queue is empty, find next unvisited process
        if (front == rear) {
            for (int i = 0; i < n; i++) {
                if (p[i].remaining_time > 0) {
                    queue[rear++] = i;
                    visited[i] = 1;
                    break;
                }
            }
        }
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time,
               p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
    }

    return 0;
}

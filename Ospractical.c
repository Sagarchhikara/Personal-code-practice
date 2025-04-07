#include <stdio.h>
#include <stdbool.h>
#define P 5 // number of processes
#define R 3 // number of resources

int Available[R] = {3, 3, 2};
int Max[P][R] = {{7, 5, 3},
                 {3, 2, 2},
                 {9, 0, 2},
                 {2, 2, 2},
                 {4, 3, 3}};
int Allocation[P][R] = {{0, 1, 0},
                        {2, 0, 0},
                        {3, 0, 2},
                        {2, 1, 1},
                        {0, 0, 2}};
int Need[P][R];
void calculateNeed()
{
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < R; j++)
        {
            Need[i][j] = Max[i][j] - Allocation[i][j];
        }
    }
}
bool isSafe()
{
    int work[R];
    bool finish[P] = {0};
    int safeSeq[P];
    int count = 0;

    for (int i = 0; i < R; i++)
    {
        work[i] = Available[i];
    }

    while (count < P)
    {
        bool found = false;
        for (int p = 0; p < P; p++)
        {
            if (!finish[p])
            {
                bool canExecute = true;
                for (int r = 0; r < R; r++)
                {
                    if (Need[p][r] > work[r])
                    {
                        canExecute = false;
                        break;
                    }
                }

                if (canExecute)
                {
                    for (int r = 0; r < R; r++)
                    {
                        work[r] += Allocation[p][r];
                    }
                    safeSeq[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }

        if (!found)
        {
            return false; // System is not in a safe state
        }
    }

    printf("Safe sequence is: ");
    for (int i = 0; i < P; i++)
    {
        printf("P%d ", safeSeq[i]);
    }
    printf("\n");
    return true;
}
int main()
{
    calculateNeed();

    if (isSafe())
    {
        printf("System is in a safe state.\n");
    }
    else
    {
        printf("System is in an unsafe state.\n");
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n,bonus;
    int total=0;
    printf("Enter No of days:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter hours of Day %d:",i);
        scanf("%d",&bonus);
        total+=bonus;
    }
    printf("Total=%d",total);
    return 0;
}
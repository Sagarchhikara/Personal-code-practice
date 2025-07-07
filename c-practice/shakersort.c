#include<stdio.h>
void shaker(char *items,int count){
    register int a;
    char t;
    int exchange;
    do
    {
        exchange=0;
        for(a=0;a<count-1;a++){
            if (items[a-1]>items[a]){
                t=items[a-1];
                items[a-1]=items[a];
                items[a]=t;
                exchange=1;
            }
        }
        for ( a = 1; a < count; ++a){
            if(items[a-1]>items[a]){
                t=items[a-1];
                items[a-1]=items[a];
                items[a]=t;
                exchange=1;
            }
        }
    } while (exchange);
    
}
int main(){
    char items[100];
    int count;
    printf("Enter the number of items to sort: ");
    scanf("%d", &count);
    printf("Enter the items to sort: ");
    for (int i = 0; i < count; i++){
        scanf(" %c", &items[i]);
    }
    shaker(items, count);
    printf("Sorted items: ");
    for (int i = 0; i < count; i++){
        printf("%c ", items[i]);
    }
    return 0;
}

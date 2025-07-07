#include<stdio.h>
#include<stdlib.h>
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     printf(" Value at position 3 pf array is %d\n",arr[3]);
//     printf(" The adress of 1st element of array is %d\n",&arr[0]);
//     printf(" The adress of 2nd element of array is %d\n",&arr[1]);
//     printf(" The adress of 2nd element of array is %d\n",arr+1);

//     printf(" Value at position 3 pf array is %d\n",*(&arr[0]));
//     printf(" Value at position 3 pf array is %d\n",*(&arr[3]));
//     printf(" The value at adress of 1st element of array is %d\n",*(&arr[0]));
//     printf(" The value at adress of 2nd element of array is %d\n",*(&arr[1]));
//     printf(" The value at adress of 2nd element of array is %d\n",*(arr+1));
//     return 0;

// }
// void changevalue(int *address){
//     *address=345;

// }
// int main(){
//     int a =34,b=36;
//     printf(" The value of a nw is %d\n",a);
//     changevalue(&a);
//     printf(" The value of a nw is %d\n",a);
//     return 0;
// }
// int func1(int array[]){
//     for (int i = 0; i < 4; i++)
//     {
//         printf(" The value of array[%d] is %d\n",i,array[i]);
//     }
//     array[0] = 100;
//     return 0;
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     printf(" The value of array[0] is %d\n",arr[0]);
//     func1(arr);
//     printf(" The value of array[0] is %d\n",arr[0]);
//     return 0;
// }
int main(){
    // use of malloc
    int* ptr;
    ptr = (int*)malloc(5*sizeof(int));// dynamic array of size 5
    for(int i=0;i<5;i++){
        printf(" Enter the value of %d element of array\n",i);
        scanf("%d",&ptr[i]);
    }
    return 0;
}
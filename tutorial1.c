#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printf(" Value at position 3 pf array is %d\n",arr[3]);
    printf(" The adress of 1st element of array is %d\n",&arr[0]);
    printf(" The adress of 2nd element of array is %d\n",&arr[1]);
    printf(" The adress of 2nd element of array is %d\n",arr+1);

    printf(" Value at position 3 pf array is %d\n",*(&arr[0]));
    printf(" The value at adress of 1st element of array is %d\n",*(&arr[0]));
    printf(" The value at adress of 2nd element of array is %d\n",*(&arr[1]));
    printf(" The value at adress of 2nd element of array is %d\n",*(arr+1));
    return 0;

}
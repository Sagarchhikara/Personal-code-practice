#include<stdio.h>
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
void changevalue(int *address){
    *address=345;

}
int main(){
    int a =34,b=36;
    printf(" The value of a nw is %d\n",a);
    changevalue(&a);
    printf(" The value of a nw is %d\n",a);
    return 0;
}
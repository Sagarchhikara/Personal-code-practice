// POINTERS
// it is a variable which holds the address of another variable.
// Syntax : datatype *ptr-name
// TYPES : int,float,double,char

// Program to illustrate a pointer
// #include <stdio.h>
// int main() {
//     int *p,a;
//     printf("Enter the value of a\n"); 
//     scanf("%d",&a);
//     p = &a;
//     printf("Value of a is : %d\n",p);     / show a's value using p variable */
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int x = 10;int y = 20;
//     int *ptr 1 = &x;
//     int *ptr 2 = &y;
//     ptr1=ptr2;
//     printf("%d %d",*ptr1,*ptr2);
//     return 0l
// }


// #include <stdio.h>
// int main() {
//     int a = 25, b;
//     int *ptr,*ptr1;
//     ptr = &a;
//     ptr1 = &b;
//     b = 36;
//     printf("%d %d",*ptr,*ptr1);
//     return 0;
// }
// POINTER OPERATORS 
// 1. Address of operator (&) : It is used to get the address of a variable.
// 2. dereference operator (*) : It is used to get the value of a variable.
int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("Address of a : %u\n",&a);
    printf("Value of a : %d\n",a);
    printf("Value of a using pointer : %d\n",*p);
    printf("Address of a using pointer : %u\n",p);
    return 0;
}

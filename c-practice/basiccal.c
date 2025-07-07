#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    int add,sub,mul,div;
    add=a+b;
    printf("The addition result is %d\n",add);
    sub=a-b;
    printf("the subtraction is %d\n",sub);
    div=a/b;
    printf("The division is %d\n",div);
    mul= a*b;
    printf("The multiplication is %d\n",mul);
    return 0;
}

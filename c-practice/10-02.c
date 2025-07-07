#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=6;
    for (int i = 1; i <=n; i++) // for rows
    {
        for (int j = 1; j <=n; j++) // for columns
        {
            printf("%-5d",i*j); //-5d for spacing
        }
        printf("\n"); // new line after each row
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int number;
    do
    {
        printf("Enter a postivive number: ");
        scanf("%d",&number);
    } while (number<=0);
    printf("You entered %d",number);
    
    return 0;
}
// count the digits in a number also find the reversed digit 
int main(int argc, char const *argv[])
{
    int num,count=0,reverse=0,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while (temp!=0);
    {
        count++;
        reverse=reverse*10+(temp%10);
        temp/=10;
    }
    printf("Number of digits: %d\n",count);
    printf("Reversed number: %d\n",reverse);
    return 0;
}
int main(int argc, char const *argv[])
{
    int i,j;
    printf("Multiplication table form 1-10:\n\n");
    printf("  ");
    for ( i = 1; i < count; i++)
    {
        /* code */
    }
    
    return 0;
}

1.Multiplication Table form 1 to 10
#include <stdio.h>

int main() {
    int i, j;
    printf("Multiplication Table from 1 to 10:\n\n");
    printf("    ");
    for (i = 1; i <= 10; i++) {
        printf("%4d ", i);
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        printf("%2d ", i); 
        for (j = 1; j <= 10; j++) {
            printf("%4d ", i * j);
        }
        printf("\n");
    }
    
    return 0;
}



2.Find factorial of 1st 10 numbers
#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    printf("Factorials of first 10 numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d! = %lld\n", i, factorial(i));
    }
    return 0;
}


3.Print prime number in a given range
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int lower, upper;
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}



4.Find composite numbers between 2 to 1000
#include <stdio.h>
int isComposite(int num) {
    if (num < 4) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    printf("Composite numbers between 2 and 1000 are:\n");
    for (int num = 2; num <= 1000; num++) {
        if (isComposite(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}



5.Find input number is Armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}



6.Calculate the sum of even and odd numbers from 1 to 50 using do-while loops
#include <stdio.h>

int main() {
    int num = 1; 
    int evenSum = 0; 
    int oddSum = 0;  

    do {
        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
        num++;
    } while (num <= 50);
    printf("Sum of even numbers from 1 to 50: %d\n", evenSum);
    printf("Sum of odd numbers from 1 to 50: %d\n", oddSum);

    return 0;
}


7.Print the pattern of square star pattern.
#include <stdio.h>
int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d",&N);
    for (int i = 0;i<N;i++) {
        for (int j = 0;j<N;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int IterativeGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int RecursiveGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        RecursiveGCD(b, a%b);
    }
}

void main()
{
    int a, b, igcd, rgcd;

    printf("Enter the first integer: ");
    scanf("%d",&a);
    printf("Enter the second integer: ");
    scanf("%d",&b);

    if(a<= 0 || b <= 0)
    {
        printf("Enter positive integer!");
    }

    igcd = IterativeGCD(a,b);
    rgcd = RecursiveGCD(a,b);
    printf("IterativeGCD is %d", igcd);
    printf("\nRecursiveGCD is %d", rgcd);
}
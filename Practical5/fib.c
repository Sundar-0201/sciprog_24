#include <stdio.h>
#include <math.h>

void fib(int *a, int *b);

void main()
{
    int n,f0=0,f1=1;

    printf("Enter the number of values : ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("The fibonacci series is : %d", f0);
    }
    else
    {
        printf("The fibonacci series is : %d, %d",f0,f1);
        for(int i=2; i<=n; i++)
        {
            fib(&f0,&f1);
        }
    }
}

void fib(int *a, int *b)
{
    int fn = *a + *b;
    *a = *b;
    *b = fn;
    printf(", %d", fn);
}
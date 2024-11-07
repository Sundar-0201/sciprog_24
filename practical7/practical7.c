#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int x)
{
    if(x<0)
    {
        printf("invalid x");
        return -1;
    }
    else if(x==0)
    {
        return 1;
    }
    else
    {
        int sum = 1;
        for(int i=1; i<=x; i++)
        {
            sum *= i;
        }
        return sum;     
    }
}

double * allocatearray(int order)
{
    double* term = (double *) malloc(order*(sizeof(double)));
    return term;
}

void fillwithones(double* term, int order) {
    for (int i = 0; i < order; i++) {
        term[i] = 1;
    }
}

void printarray(double* term, int order) {
    for (int i = 0; i < order; i++) {
        printf("%0.10lf\n ", term[i]);
    }
    printf("\n");
}

void freeterm(double* term)
{
    free(term);
}

void main()
{
    int order;
    double *term;
    double e=1.0;

    printf("Enter the required polynomial order: ");
    scanf("%d",&order);

    term = allocatearray(order);
    fillwithones(term, order);

    for(int i=0; i<order; i++)
    {
        term[i] = 1.0 / factorial(i+1);
    }
    printarray(term, order);

    for(int i=0;i<order;i++)
    {
        e = e + term[i];
    }
    printf("e estimated: %0.10lf", e);
    printf("\ne actual: %0.10lf", exp(1.0));
    printf("\ndifference: %0.10lf", e - exp(1.0));

    freeterm(term);
}
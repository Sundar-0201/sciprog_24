#include <stdio.h>
#include <math.h>

int N = 12;
float tan_array[12];
float area();
float degrees_to_radians(int degrees);

void main()
{
    float ar;
    for(int i=0; i<N; i++)
    {
        tan_array[i] = tan(degrees_to_radians(i*5));
    }
    ar = area();
    printf("Trapezoidal result is : %f\n", ar);
    printf("Real Result is : %f\n", logf(2));
}

float degrees_to_radians(int degrees)
{
    float radians = (degrees * M_PI) / 180;
    return radians;
}

float area()
{
    float a = 0;
    float b = 60;
    float b_rad = degrees_to_radians(b);

    float area = tan_array[0] + tan_array[N];
    for(int i = 1; i < N; i++)
    {
        area += 2 * tan_array[i];
    }
    area = (b_rad-a)/(2*N) * area;
    return area;
}
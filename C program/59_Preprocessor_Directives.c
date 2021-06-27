#include <stdio.h>
#include "tutorial54.c"
#define PI 3.14  

int main()
{
    float var =PI;
    int * ptr = functionDangling();
    printf("The value of PI i %f\n", var);
    return 0;
}
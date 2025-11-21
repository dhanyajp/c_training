// malloc1
#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p=(float*)malloc(4* sizeof (float));
    p[0]=2.41;
    p[1]=4.62;
    p[2]=5.73;
    p[3]=7.94;
    printf("%f",p[2]);
    free(p);
}
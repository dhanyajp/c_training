// realloc
#include <stdio.h>
#include <stdlib.h>
float main()
{
    float *p=(float*)malloc(5* sizeof (float));
    p[0]=2.41;
    p[1]=4.62;
    p[2]=5.73;
    p[3]=7.94;
    p[4]=6.90;
    printf("%f",p[4]);
    free(p);
}

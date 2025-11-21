// malloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p=(int*)malloc(4* sizeof (int));
    p[0]=45;
    p[1]=56;
    p[2]=34;
    p[3]=47;
    printf("%d",p[0]);
    free(p);
}
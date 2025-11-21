// realloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p=(int*)malloc(3* sizeof (int));
    p[0]=2;
    p[1]=4;
    p[2]=5;
    p=(int*)realloc(p,5* sizeof (int));
    p[3]=7;
    p[4]=6;
    for(int i=0; i<5; i++)
    printf("%d",p[i]);
    
}
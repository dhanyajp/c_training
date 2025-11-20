// write a function which accept two input parameters x,y and returns x^2+y^2
#include <stdio.h>
int sqr(int x,int y)
{
    int prod=(x*x)+(y*y);
    return prod;
}
void main()
{
    int x=8,y=4;
    printf("%d\n",sqr(x,y));
}
// write a C function which will accept three parameters l,b,h and returns volume of the cube.
#include <stdio.h>
int vol(int l,int b,int h)
{
    int prod=l*b*h;
    return prod;
}
void main() 
{
    int l=6,b=6,h=6;
    printf("%d\n",vol(l,b,h));
}

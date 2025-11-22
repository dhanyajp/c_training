// write a c programme which adds three numbers and call it by reference 
#include <stdio.h>
void sum_value(int a,int b,int c)
{
    int sum = a+b+c;
    printf("%d",sum);
}
void sum_ref(int *a,int *b,int *c)
{
    int sum = *a+*b+*c;
    printf("%d",sum);
}
void main()
{
    int a=51;
    int b=14;
    int c=10;
    printf("call by reference:\n");
    sum_value(*&a,*&b,*&c);//by ref
}
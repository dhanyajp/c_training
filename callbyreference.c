// call by reference 
#include <stdio.h>
void sum_value(int a, int b)
{
    int sum = a+b;
    printf("%d",sum);
}
void sum_ref(int *a,int *b)
{
    int sum = *a+*b;
    printf("%d",sum);
}
void main()
{
    int a=90;
    int b=88;
    printf("call by value:\n");
    sum_value(a,b);//call by value
    printf("call by reference:\n");
    sum_value(*&a,*&b);//by ref
}

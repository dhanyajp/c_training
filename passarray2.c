// write a C function which will accept an array arr,its size as n,and returns the difference between the first and last element
#include <stdio.h>
#include <stdlib.h>

int subarr(int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[3]={45,67,98};
    int n=3;
    printf("%d",subarr(arr,n)); 
}

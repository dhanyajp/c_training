// create a structure with three variables with name of the car,maximum speed and price store these in array of structures and display them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    char speed[100];
    int price;
};
void main()
{
    int n;
    printf("enter number of  car:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0; i<n; i++)
    {
       printf("enter name of car:");
       scanf("%s",c[i].name);

       printf("enter speed of car:");
       scanf("%s",c[i].speed);

       printf("enter the price:");
       scanf("%d",&c[i].price);
    }
}
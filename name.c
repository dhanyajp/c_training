#include <stdio.h>
void names (char first[],char last[])
{
    int i=0;
    char full[100];
    while (first[i]!='\0')// adding first
    {
        full[i]=first[i];
        i++;
    }
    full[i]=' ';
    i++;
    int j=0;
    while (last[j]='\0')// adding last
    {
        full[j]=last[j];
        i++;
        j++;
    }
    printf("%s",full);
}
void main()
{
    char first[10]="raj";
    char last[10]="kumar";
    names (first,last);
}
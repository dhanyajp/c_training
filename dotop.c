#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=18;
    s1.marks=90.5;
    strcpy(s1.name,"bhavish");

    struct student s2;
    s2.age=19;
    s2.marks=87.6;
    strcpy(s2.name,"dhanya");
 
    struct student s3={"harshini",17,95};
    
    printf("%s",s3.name);
    printf("%s",s2.name);
    printf("%s",s1.name);
}
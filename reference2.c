#include <stdio.h>
struct score
{
    float marks;
    float rank;
};
void edit(struct score *s1)
{
    printf("%f",s1->marks);
    s1->marks=50.35;

    printf("before change in fn:%f\n",s1->marks);
    s1->marks=50.35;
    printf("after change in fn:%f\n",s1->marks);
}
void main()
{
    struct score s1={98.7,3};
    edit(&s1);
    printf("after change in main %f\n",s1.marks);
}
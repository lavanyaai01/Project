#include<stdio.h>
int loop ()
{
    int a,b;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    for(a;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
        printf(" * ",b);
        }
             printf("\n");
    }
     return 0;
}
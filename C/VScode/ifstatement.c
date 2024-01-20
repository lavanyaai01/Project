# include<stdio.h>
int positive ()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("The value is Positive");
    }
    else if (a<0)
    {
        printf("The value is Negative");
    }
    return 0;
}
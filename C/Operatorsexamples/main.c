#include <stdio.h>


int main()
{
    int a=20;
    int b=15;
    int additionprogram(int a,int b);
    int subtractionprogram(int a,int b);
    int multiplicationprogram(int a,int b);
    int divisionprogram(int a,int b);
    int modulusprogram(int a,int b);
    int greaterprogram(int a,int b);
    int addprogram(int a,int b);
    int locationprogram(int a,int b);
    int Incrementprogram(int a);
    int logicalprogram(int a,int b);
    return 0;
}
int additionprogram(int a,int b)
{
    int z=a+b;
    printf("\n  ADDITION    ");
    printf("\nAdded value for z is: %d",z);
}

int subtractionprogram(int a,int b)
{
    int z=a-b;
    printf("\n  SUBTRACTION");
    printf("\nSubtracted value for z is:%d",z);
}
int multiplicationprogram(int x,int y)
{
    int z=x*y;
    printf("\n  MULTIPLICATION");
    printf("\nMultiplicated value for z is:%d",z);
}
int divisionprogram(int x,int y)
{
    float z=(float) x/y;
    printf("\n  DIVISION");
    printf("\nDivided value for z is:%f",z);
}
int modulusprogram(int x,int y)
{
    int z=x%y;
    printf("\n  MODULUS");
    printf("\nModulus value for z is:%d",z);
}
int greaterprogram(int x,int y)
{
    printf("\n  GREATER");
    if (x>y)
    {
        printf("\nx is greater than y");
    }
    else
    {
        printf("\nx is less than y");
    }
}
int addprogram(int x,int y)
{
    printf("\n  ADD");
    for (x=0;x<10;x++)
    {
        printf("\nEnter the value of x:%d",x);
    }
    for (y=10;y>5;y--)
    {
        printf("\nEnter the value of y:%d",y);
    }
}
int locationprogram(int x,int y)
{
    printf("\n  LOCATION");
    switch (x)
    {
    case 1:
        printf("\nMy location is Trichy");
        break;
    case 2:
        printf("\nMy location is Chennai");
        break;
    default:
        printf("\nNo available location");
    }
}
int Incrementprogram(int x)
{
    printf("\n  INCREMENT");
    while (x<10)
    {
        printf("\nThe value of x:%d",x);
        x++;
    }
}

int logicalprogram(int x,int y)
{
    printf("\n  LOGICAL");
    printf("\nThe value:%d",(x<30 && y<20));
    printf("\nThe value:%d\n",(x<10 || y<10));
}

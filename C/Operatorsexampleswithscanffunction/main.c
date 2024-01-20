#include <stdio.h>

int main()
{
   int a,b;
   addition (getB(),getA());
   subtraction(getB(),getA());
   multiplication(getB(),getA());
   division(getB(),getA());
   modulus(getB(),getA());
   increment(getA());
   decrement(getB());
   greater(getB(),getA());
   assignment(getB(),getA());
   comparison(getB(),getA());
   logical(getB(),getA());
    return 0;
}
int getA()
{
    int a;
    printf("\nEnter the value of A:");
    scanf("%d",&a);
    return a;
}
int getB()
{
    int b;
    printf("\nEnter the value of B:");
    scanf("%d",&b);
    return b;
}
int addition(int a,int b)
{
    int c=a+b;
    printf("\nAdded value is:%d",c);
}
int subtraction(int b,int a)
{
    int c=a-b;
    printf("\nSubtracted Value is:%d",c);
}
int multiplication(int a,int b)
{
    int c=a*b;
    printf("\nMultiplied Value is:%d",c);
}
int division(int b,int a)
{
    float z=(float)a/b;
    printf("\nDivided value is:%f",z);
}
int modulus(int b,int a)
{
   int c=a%b;
   printf("\nModulus value is:%d",c);
}
int increment(int a)
{
    while (a<20)
    {
        printf("\nIncrement value is:%d",a);
        a++;
    }
}
int decrement(int b)
{
    while (b>10)
    {
        printf("\nDecrement value is:%d",b);
        b--;
    }
}
int greater(int b,int a)
{
    if(a>b)
    {
        printf("\nA is greater than B");
    }
    else if (a<b)
    {
        printf("\nA is less than B");
    }
}
int assignment(int a,int b)
{
    a+=b;
    printf("The value is:%d",a);
    b-=b;
    printf("\nThe value is:%d",b);
}
int comparison(int b,int a)
{
    a>b;
    a<=b;
    printf("\nThe value is:%d",a>b);
    printf("\nThe value is:%d",a<=b);
}
int logical(int b,int a)
{
    printf("\nThe value is:%d",a>10 && b<=20);
    printf("\nThe value is:%d",a<15 || b>15);
    printf("\nThe value is:%d",!(a>10 && b<=15));
}

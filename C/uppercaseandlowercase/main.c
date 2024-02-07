#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    char b;
    int x;
    printf ("Enter the Uppercase character:");

    scanf ("%c",&a);
    a=a+32;
    printf("The lowercase character is:  %c", a);
    printf("\nEnter the lowercase character: ");
    fflush(stdin);
    scanf("%c",&b);
    b=b-32;
    printf("The Uppercase character is:  %c " ,b);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=10;
   int b=15;
   printf("Value of a:%d",a);
   printf("\nAddress of a:%d",&a);
   printf("\nValue of b:%d",b);
   printf("\nAddress of b:%d",&b);
   printf("\nSize of int:%d",sizeof(int));
   int *p=&a;
   printf ("\nValue of p:%d",p);
   printf("\nAddress of p:%d",&p);
   printf("\nValue stored in the address of p:%d",*p);
   int **q=&p;
   printf ("\nValue of q:%d",q);
   printf("\nAddress of q:%d",&q);
   printf("\nValue stored in the address of q to the address of p:%d",**q);
   int ***r=&q;
   printf ("\nValue of r:%d",r);
   printf("\nAddress of r:%d",&r);
   printf("\nValue stored in the address of r to the address of q in the address of p:%d",***r);
   void *s=&a;
   printf("\nValue of s=%d",s);
   printf("\nAddress of s:%d",&s);
   printf("\nValue stored in the address of s in the address of r to the address of the q in the address of p:%d",*(int*)s);
    return 0;
}

#include <stdio.h>
int main()
  {
    int a, b,c,op,i;
    printf("Enter the number 2 or 3:");
    scanf(" %d ", &i);
    if(i==2)
     {
        printf("Enter value of a :\n");
        scanf("%d", &a);
        printf("Enter the value of b:\n");
        scanf("%d",&b);
        printf("Select the Operator");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("You are selected addition");
            printf("\nAdded value of a & b is: %d\n",a+b);
            break;
         case 2:
            printf("You are selected Subtraction");
            printf("\nSubtraced value of a & b is: %d\n",a-b);
            break;
         case 3:
            printf("You are selected Multiplication");
            printf("\nMultiply value of a & b is: %d\n",a*b);
            break;
         case 4:
            printf("You are selected Division");
            printf("\nDivided value of a & b is: %d\n",a/b);
            break;
            default:
            printf(" invalid operator \n");
        }
     }
   else
   {
        printf("Enter value of a :\n");
        scanf("%d", &a);
        printf("Enter the value of b:\n");
        scanf("%d",&b);
        printf("Enter the value of c:\n");
        scanf("%d",&c);
        printf("Select the Operator");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("You are selected addition");
            printf("\nAdded value of a & b & c is: %d\n",a+b+c);
            break;
         case 2:
            printf("You are selected Subtraction");
            printf("\nSubtraced value of a & b & c is: %d\n",a-b-c);
            break;
         case 3:
            printf("You are selected Multiplication");
            printf("\nMultiply value of a & b & c is: %d\n",a*b*c);
            break;
         case 4:
            printf("You are selected Division");
            printf("\nDivided value of a & b & c is: %d\n",a/b/c);
            break;

        default:
            printf(" invalid operator \n");
        }
        printf("\n");
    }
    return 0;
  }
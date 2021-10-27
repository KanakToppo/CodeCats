#include <stdio.h>
int main()
{ int num1,num2;
printf("Enter Number 1\n");
scanf("%d",&num1);
printf("Enter Number 2\n");
scanf("%d",&num2);

    (num1>num2) ? printf("Number 1 is greater"):printf("Number 2 is greater");// using ternary operator
    return 0;
}
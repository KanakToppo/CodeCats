#include <stdio.h>
int main()
{ int num;
printf("Enter a number\n");
scanf("%d",&num);
    (num%2==0) ? printf("even"):printf("odd");// using ternary operator
    return 0;
}


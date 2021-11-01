#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the number to find sum of natural numbers\n");
    scanf("%d",&n);
sum=n*(n+1)/2;
  
    printf("%d is sum of first %d numbers",sum,n);
    return 0;
}


#include <stdio.h> 

int main() 
{
  int num1,num2,i;
  long long num=1;
  printf("Enter any two numbers \n:");

  scanf("%d%d",&num1,&num2);

  for (i = 1; i <= num2; i++) 
  {
     num=num*num1;
  }
   printf("%d to the power %d is :%lld",num1,num2,num);
 
  return 0;    
}

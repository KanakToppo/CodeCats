#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the value of A B C\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a > b){
      
        if(a > c)
            max = a;
        else
            max = c;
    } else {

        if(b > c)
            max = b;
        else
            max = c;
    }
    printf("the lasrgest no is =%d",max);
  return 0;
}
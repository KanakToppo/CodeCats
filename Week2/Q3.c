#include <stdio.h>
int main()
{
    int r,sum=0,num,c,temp;
    printf("Enter the number to check whether Armstrong or not.\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;

    }
    num=temp;
    if(num==sum)
    printf("%d is an Armstrong number\n",num);
    else
     printf("%d is not an Armstrong number\n",num );
    return 0;
}
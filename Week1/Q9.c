#include <stdio.h>
int main()
{ int n1,n2,n3,n4,n5;
     float per;

printf("Enter the marks in this order\nPhysics\nChemistry\nBiology\nMaths\nComputer\n");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

per = (n1+n2+n3+n4+n5)/5.0;
printf("Percentage = %.2f\n", per);


   
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

   
 
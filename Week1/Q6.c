#include <stdio.h>
int main()
{ int num;
printf("Enter Number \n");
scanf("%d",&num);
switch (num)
{
    case 1: printf("%d is Monday \n",num);
        break;
    case 2: printf("%d is Tuesday \n",num);
        break;
    case 3: printf("%d is Wednesday \n",num);
        break;
    case 4: printf("%d is Thursday \n",num);
        break;
    case 5: printf("%d is Friday \n",num);
        break;
    case 6: printf("%d is Saturday \n",num);
        break;
    case 7: printf("%d is Sunday \n",num);
        break;

    default: printf("Sorry incorrect number\n");
}
    return 0;
}
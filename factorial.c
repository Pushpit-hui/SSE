#include <stdio.h>

int main ()
{
    int num ;
    printf("enter the number for factorial");
    scanf("%d",&num);

    int i = 1;

    while (num>0)
    {
        
        i*=num;
        num--;


    }
    printf ("%d\n", i);

    printf("enter the number for factorial");
    scanf("%d",&num);

    int fact=1;

    for (  i=1; i <= num ; i++ )
    {
        
        fact*=i;
        

    }
    printf("%d\n",fact);

return 0;




    

}

#include<stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int min,max,num,i,a,fact;
    printf("Enter Min value: ");
    scanf("%d",&min);
    printf("Enter Max value: ");
    scanf("%d",&max);
    for(i=min;i<=max;i++)
    {
        fact=1;
    for(a=1;a<=i;a++)
    {
        sum=sum*a;
    }
    printf("Factorial of given number %d is : %d\n",i,sum);
    }
}

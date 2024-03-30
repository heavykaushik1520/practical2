#include<stdio.h>
  void perfect(int *);
  void main(){
         int n,sum1;
         
         printf("Enter a number as integer : ");
         scanf("%d",&n);
         sum1= perfect(&n);
         if(sum1 == n)
         printf("\nThe number %d is a perfect number",n);
         else
         printf("\nThe number %d is not a perfect number",n);
         
         
         }

  void perfect(int *numbr)
  {
        int a=1, sum=0;
        while(a < *numbr)
	{
        if(*numbr % a == 0)
        sum=sum+a;
        a++;
    }
        //return(sum);
  }

#include<stdio.h>
void main()
{
	int n , count = 0 , i;
	printf("Enter the number : ");
	scanf("%d",&n);
	//i<=n
	for(i = 1 ; i<=n ; i++)
	{
	 
		 	if(n%i==0)
			 
		    count++;
     }
     if(count==2)
     printf("This is prime number.");
     else 
     printf("This is not prime number.");
	
}


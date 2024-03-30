//STRONG NUMBER
#include<stdio.h>
int check_strong();
void main()
{
	int x , n;
	x = check_strong();
	if(x==n)
	printf("Given number is strong.");
	else
	printf("Given number is not strong");
}
int check_strong()
{
	int i, n, n1, s1=0,j;  
    long fact; 
	printf("Input a number to check whether it is Strong number: ");  
    scanf("%d", &n);  
  
    n1 = n;  
 
    for(j=n;j>0;j=j/10) 
    {  
  
        fact = 1;  
        for(i=1; i<=j % 10; i++)  
        {  
            fact = fact * i;  
        }  
         s1 = s1 + fact;  
 
    }  
  
    if(s1==n1)
	return 1;  
    else
	return 0;  
   
}

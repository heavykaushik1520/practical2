//Accept the elements of array from user and sum all the elements? 
#include<stdio.h>
void main()
{
	int a[5], i , sum =0 ;
	printf("Enter 5 element array: ");
	for(i = 0 ; i < 5 ; i++)
	{
	   scanf("%d",&a[i]);
	   	
	}
	printf("Sum of all element: ");
	for(i = 0 ; i < 5 ; i++)
	{
		sum = sum + a[i];
	}
	printf("%d ", sum);
}

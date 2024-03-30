//Accept the elements of array from user and sum all the elements? pointer to array 
#include<stdio.h>
void main()
{
	int a[5], i , sum =0 ;
	int* ptr ;
	ptr = a ;
	printf("Enter 5 element array: ");
	for(i = 0 ; i < 5 ; i++)
	{
	   scanf("%d",&ptr[i]);
	   	
	}
	printf("Sum of all element: ");
	for(i = 0 ; i < 5 ; i++)
	{
		sum = sum + ptr[i];
	}
	printf("%d ", sum);
}

//ascending array using poiter to array:
#include<stdio.h>
void main()
{
	int n , i ,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	int* ptr;
	ptr = arr;
	printf("Array:");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&ptr);
	}
	printf("Print the given array in acsending order: ");
	int temp;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n-1-i ; j++)
		if(ptr[j]>ptr[j+1])
		{
			temp = ptr[j];
		   ptr[j] = ptr[j+1];
		   ptr[j+1]= temp;
	    }
		
	}
	for(i = 0 ; i < n ; i++)
	printf("%d",ptr[i]);
}

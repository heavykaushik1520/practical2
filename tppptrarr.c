#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int* ptr;
	int arr[n];
	printf("Enter the array element: ");
	ptr = arr ;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("The array is: ");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n%d",ptr[i]);
	}
}

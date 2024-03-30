#include<stdio.h>
void main()
{
	int n , i , x , index ;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for( i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	index = -1 ;
	printf("Element to find from array: ");
	scanf("%d",&x);
	
	for(i = 0 ; i < n ; i++)
	{
		if(arr[i] == x)
		{
			index = i;
			break;
		}
	}
	if(index == -1)
	printf("Given element is not in the array.");
	else
	printf("Element found at %d index position.", index);
}

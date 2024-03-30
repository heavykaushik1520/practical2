//find unique element in array:
#include<stdio.h>
void main()
{
	int i , n , j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("Array of given size: ");
	int arr[n];
	for(i = 0 ; i < n ; i++)
	{
    	scanf("%d",&arr[i]);
	}
	
	printf("Unique Element in given array: ");
	for(i= 0 ; i < n ; i++)
	{
		for(j =0 ; j < i ; j++)
		{
			if(arr[i]==arr[j])
			{
				break;
			}
			
		}
		if(i == j)
			{
				printf("%d",arr[i]);
			}
	}
}

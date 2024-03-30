//delete duplicate array in element and delete it:
#include<stdio.h>
void main()
{
	int i , n  , j , k;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Array: ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Delete duplicate element in array and make new array:\n ");
	for(i = 0 ; i < n ; i++)
	{
		for( j = i + 1 ; j < n ; j++)
		{
			if(arr[i]== arr[j])
			{
				for(k = j ; k < n ; k++)
				arr[k] = arr[k+1];
				n-- ;
				j--;
			}
		}
	}
	for(i = 0 ; i< n ; i++)
	printf("%d\t",arr[i]);
}

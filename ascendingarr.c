//ascending order;
#include<stdio.h>
void main()
{
	int i , n , j;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array in ascending order: ");
	 int temp;
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = 0 ; j < n-1-i ; j++)
		if(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j]= arr[j+1];
			arr[j+1] = temp;
			//flag = true;
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
	
	printf("%d",arr[i]);
	}
	
	
}

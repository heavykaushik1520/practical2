#include<stdio.h>
void main()
{
	int n , i , max ;
	printf("Size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values in Array: ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(i = 0 ; i < n ; i++)
	{
		if(max < arr[i])
		max = arr[i];
	}
	printf("\n\n%d  is max value of array.",max);
}

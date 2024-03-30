#include<stdio.h>
void main()
{
	int i , n ;
	printf("Size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Duplicate element in array: ");
	int temp , j;
	for(i = 0 ; i < n ; i++)
	{
		temp = arr[i];
		for(j = i + 1 ; j < n ; j++)
		if(arr[i]==arr[j]&&arr[i] != NULL)
		{
			arr[i] = NULL;
			printf("%d\n",temp);
		}
		else if(temp == arr[i])
		arr[j]= NULL;
	}
}

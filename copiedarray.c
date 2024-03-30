#include<stdio.h>
void main()
{
	int arr[5] , i;
	printf("Enter array  five element : ");
	for(i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Copying array in another array:");
	int arr2[5];
	for(i = 0 ; i < 5 ; i++)
	{
		arr2[i] = arr[i];
		printf("%d\t ",arr2[i]);
	}

}

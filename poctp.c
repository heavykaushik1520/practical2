#include<stdio.h>
void main()
{
	int i ;
	int arr[5]={0};
	int* ptr ;
	ptr = arr ;
	for(i = 0 ; i < 5 ; i++)
	{
		printf("Enter array element: ");
		scanf("%d",&ptr[i]);
	}
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d",arr[i]);
	}
}

#include<stdio.h>
void main()
{
	int n , i , x , flag = 0;
	printf("Size of array: ");
	scanf("%d",&n);
	int arr[n];
	int* ptr ;
	ptr = arr ;
	printf("Array >>");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the element to find out: ");
	scanf("%d",&x);
	
	for(i = 0 ; i < n ; i++)
	{
		if( x == ptr[i] )
		{
			printf(" %d is found in array",x);
			flag = 1;
		}
		
	}
	if(flag == 0)
	{
		printf("%d is not found in list.",x);
	}
	
	
}

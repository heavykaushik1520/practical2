#include<stdio.h>
void main()
{
	int i  , n;
	printf("Size of array: ");
	scanf("%d",&n);
	char arr[n];
	for(i = 0 ; i<n ; i++)
	{
		scanf("%c",&arr[i]);
	}
	
	for(i = 0 ; i<n ; i++)
	{
		printf("%c",arr[i]);
	}
	
}

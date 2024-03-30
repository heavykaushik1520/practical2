#include<stdio.h>
void main()
{
	int i ;
	int arr[] = { 1 , 2 , 3 , 4 ,5};
	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("length of array : %d",n);
    printf("Array in reverse order: ");
	for(i = n-1 ; i >= 0 ; i--)
	{
		printf("\n%d ",arr[i]);
	}
}

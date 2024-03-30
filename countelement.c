#include<stdio.h>
void main()
{
	int n , i , x , count = 0 ;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Array: ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	 printf("Enter element to check: ");
	 scanf("%d",&x);
	 for( i = 0 ; i < n ; i++)
	 {
	 	if( arr[i] == x)
	 	{
	 		
	 		count ++ ;
		 }
	 }
	 printf("%d is available with count:%d",x , count);
}

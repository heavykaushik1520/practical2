//Find max and min element of array? 
#include<stdio.h>
void main()
{
	int a[5] , i , min , max;
	int* ptr;
	int* ptr2;
	printf("Enter 5 elements array: ");
	for(i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&a[i]);
    }
    ptr = a[0];
    ptr2 = a[0];
    
    for(i = 1 ; i < 5 ; i++)
	{
	
    if(ptr > a[i])
    ptr = a[i];
    if(ptr2 < a[i])
    ptr2 = a[i];
    }
    
    printf("Minimum value element is %d",ptr);
    printf("\nMaximum value element is %d", ptr2);
}

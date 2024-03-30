//Find max and min element of array? 
#include<stdio.h>
void main()
{
	int a[5] , i , min , max;
	printf("Enter 5 elements array: ");
	for(i = 0 ; i < 5 ; i++)
	{
		scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i = 1 ; i < 5 ; i++)
	{
	
    if(min > a[i])
    min = a[i];
    if(max < a[i])
    max = a[i];
    }
    
    printf("Minimum value element is %d",min);
    printf("\nMaximum value element is %d", max);
}

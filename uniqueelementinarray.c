#include<stdio.h>
void main()
{
    int i, n, j ;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
       
    }
    printf("Unique element in array: ");
    for(i = 0; i < n; i++)
    {
    	for(j = 0 ; j < n ; j++)
    	{
    	if(i == j)                        //skip iteartion when we get unique element                   
    	{
    		continue;
		}
		if(arr[i]==arr[j])            //i.e we got two elements so break it
		{
			break;
		}
	}
	if(j == n)                        //j checked till last element
	{
		
	    printf("%d",arr[i]);	
	}
	}
		
}


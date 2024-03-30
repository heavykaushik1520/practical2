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
    	if(i == j)
    	{
    		continue;
		}
		if(arr[i]==arr[j])
		{
			break;
		}
	}
	if(j == n)
	{
		//for(i = 0 ; i < n ; i++)
	    printf("%d",arr[i]);	
	}
	}
		
}


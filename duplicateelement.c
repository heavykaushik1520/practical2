//find duplicate elements in array;
#include<stdio.h>
void main()
{
	int n , i , j ;
	printf("Size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Array : ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Duplicate elements in array : ");
	int visited[n];
	for(i = 0 ; i < n ; i++)
	{
		if(visited[i]==0)
		{
			int count = 1;
			for(j = i + 1; j < n ; j++)
			{
				if(arr[i] == arr[j])
				{
					count++;
					visited[j] = 1;
				}
			}
			if(count > 1)
			printf("\n %d ",arr[i]);
		}
	}
	
    	
}

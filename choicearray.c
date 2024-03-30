#include<stdio.h>
void main()
{
	int n , i , ch  , flag;                                          //ch = choice
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Array: ");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the choices: ");
	printf("\n1 :: for Prime elements from list.");
	printf("\n2 :: for Min and Max.");
	printf("\n3 :: for Sum of element.");
	
	printf("\nMake a choice: ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("\nPrime number in given array are: ");
		for(i = 0 ; i < n ; i++)
		{
			int j ;
			flag = 0 ;
			for(j = 0 ; j < arr[i] ; j++)
			{
				if(arr[i]% j == 0)
				flag = 1;
			}
			if(flag == 1)
			printf("%d",arr[i]);
			
		}
	}
	if(ch==2)
	{
		printf("\nMax and Min value in given array:");
		int min , max ;
		min=max=arr[0];
    for(i = 1 ; i < n ; i++)
	{
	
    if(min > arr[i])
    min = arr[i];
    if(max < arr[i])
    max = arr[i];
    }
    
    printf("\nMinimum value element is %d",min);
    printf("\nMaximum value element is %d", max);
	}
	if(ch==3)
	{
		printf("\nSum of element in given array: ");
		int sum = 0;
		for(i = 0 ; i < n ; i++)
		{
			sum = sum + arr[i];
		}
		printf("%d",sum);
	}
}

#include<stdio.h>
int PrimeNo(int num)
{
    int i, flag = 1;
    for(i = 2; i <= num/2; ++i)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

void MinMax(int arr[], int n, int* min, int* max)
{
	int i;
    *min = *max = arr[0];
    for(i = 1; i < n; ++i)
    {
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}

int findSum(int arr[] , int n)
{
    int i , sum = 0;
    for( i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

void AscendingArray(int arr[] , int n)
{
	int i , j , temp;
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = 0 ; j < n-1-i ; j++)
		if(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j]= arr[j+1];
			arr[j+1] = temp;
			
		}
	}
}


void main()
{
	int n , i , ch;
	printf("Size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Array: ");
	for(i = 0 ; i < n ; i++)
	{
	    scanf("%d",&arr[i]);	
	}
	
	printf("\nChoose your choice: ");
	printf("\n1 :: Prime Elements from Array.");
	printf("\n2 :: Min Max element of array.");
	printf("\n3 :: Sum of elements.");
	printf("\n4 :: Ascending array elements.");
	
	printf("\n\nMake a choice: ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("Prime numbers in given array: ");
		for(i = 0 ; i < n ; i++)
		{
			if(PrimeNo(arr[i]))
			printf("%d ",arr[i]);
		}
	}
	if(ch==2)
	{
		int min , max ;
		MinMax(arr , n , &min , &max);
		printf("\nManimum value of Array :%d ",min);
		printf("\nMaximum value of Array :%d ",max);
	}
	if(ch==3)
	{
		printf("Sum of elements in the given array is %d\n", findSum(arr, n));
	}
	if(ch==4)
	{
		AscendingArray(arr , n);
		printf("Array in ascending order: ");
		for(i = 0 ; i < n ; i++)
		{
			printf("%d ",arr[i]);
		}
	}
//    if(ch==5)
//    {
//    	
//	}
}


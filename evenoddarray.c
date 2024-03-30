//Find all odd and even no.'s in array? 
#include<stdio.h>
void main()
{
	int a[10] , i;
	printf("Enter 10 elements in array  ");
	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("Divide them in even and odd ");
	printf("Even numbers: ");
	for(i = 0 ; i < 10 ; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d " , a[i]);
		}
    }
    printf("\nOdd numbers: ");
    for(i = 0 ; i < 10 ; i++)
	{
	
		if(a[i] % 2 == 1)
		{
			printf("%d ", a[i]);
		}
    }
}


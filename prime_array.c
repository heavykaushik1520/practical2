
#include <stdio.h> 
void main() 
{ 
	int i,j,b,flag; 
	int a[] = {1 , 2 , 3 , 4 ,5 , 6 , 7, 8 ,9 , 10};
//	for(i = 0 ; i < 10 ; i++)
//	{
//		scanf("%d",&a[i]);
//	}
	b = sizeof(a) / sizeof(a[0]); 
	printf("find the prime numbers: ");
	for(i = 0 ;i < b; i++) 
	{ 
		flag=0; 
		for(j = 2;j <= a[i]/2 ; j++) 
		{ 
			if( a[i] % j == 0 ) 
			{ 
				flag = 1; 
				break; 
			}	 
		} 
		if( flag == 0 ) 
		{ 
			printf("%d\n",a[i]); 
		} 
	} 
	 
} 

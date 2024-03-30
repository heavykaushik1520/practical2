#include<stdio.h>
void sum_natural(int* , int*);
void main()
{
	int stno,enno,result,n;
	printf("Enter the range: ");
	scanf("%d%d",&stno,&enno);
	
	
	for(n=stno;n<=enno;n++){
	
	    sum_natural(&n,&result);
		//printf("\nSum of numbers in given range :%d",result);
	}
     printf("Sum of numbers in given range :%d",result);	
}
void sum_natural(int*n1 ,int*result )
{
	*result = 0;
	
	

	*result = *result + *n1;

}

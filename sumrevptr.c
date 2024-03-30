#include<stdio.h>
int* sumofdigit(int* );
int* revofdigit(int* );
void main()
{
	int a ;
	printf("Enter number: ");
	scanf("%d",&a);
	int* x = &a ;
	
	int* sum;
	int* rev;
	sum = sumofdigit(x);
	printf("\nSum of digit  is %d", *sum);
	rev = revofdigit(x);
	printf("\nRevesre of digit  is %d", *rev);
	
	
}
int* sumofdigit(int* x1)
{
	int num = *x1;
	int sum = 0 , d ;
	while( num)
	{
		d = num % 10 ;
		num = num / 10 ;
		sum = sum + d;
	}
	int* ptr = &sum;
	return ptr;
}
int* revofdigit(int* x1)
{
    int rev = 0 , d, num = *x1;
    while( num != 0)
    {
        d = num % 10 ;
        rev = rev*10 + d;
        num = num / 10 ;
    }
    int* ptr = &rev;
    return ptr;
}
 

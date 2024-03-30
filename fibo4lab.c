#include<stdio.h>
int fibonacciSeries(int);
void main()
{
	int range,x;
	printf("Enter the range: ");
	scanf("%d",range);
	x=fibonacciSeries(range);
	printf("Fibonacci Series:\n ",range);
}
int fibonacciSeries(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
 //    printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
   return a;
}

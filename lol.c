#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int n,i;
printf("Enter the nth term : \n");
scanf("%d",&n);
printf("Fibonacci series is : ");
for(i=0;i<n;i++)
printf(" %d ",fib(i));

getch();
}
int fib(int n)

{
if(n==0)
return 0;
if(n==1||n==2)
return 1;
else
return fib(n-1)+fib(n-2);

}

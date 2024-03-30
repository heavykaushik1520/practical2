#include<stdio.h>
int fibonacciTerm(int a,int b)
{
  return a+b;
}
void main()
{
  int term,result;
  printf("Enter the terms:");
  scanf("%d",&term);
  int a=0,b=1,next,i;
  printf("Fibonacci term is:",term);
  printf("%d\t %d\t ",a,b);
  for(i=2;i<term;i++)
  {
    next=a+b;
    printf("%d\t",next);
    a=b;
    b=next;
  }
  
}

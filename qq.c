#include<stdio.h>
void Factorial(int*, int*);
void main()
{
  int num, sum=1;
  printf("Enter the number: ");
  scanf("%d",&num);
  Factorial(&num,&sum);
  printf("Factorial of entered number is: %d",sum);
}
void Factorial(int* num1, int* sum1)
{
  while(*num1!=0)
  {
    *sum1=(*sum1)*(*num1);
    (*num1)--;
  }
  
}

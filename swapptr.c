#include<stdio.h>
void swap(int*,int*);
void main()
{
  int a=10,b=20;
  printf("Before swaping A=%d B=%d",a,b);
  swap(&a,&b);
  printf("\nAfter swaping A=%d B=%d",a,b);
  
}
void swap(int*x,int*y)
{
  int n;
  n=*x; //n=10
  *x=*y; //*x=20
  *y=n; //*y=10
  
}

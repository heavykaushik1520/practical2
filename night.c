#include <stdio.h>
void addTwoNumbers(long *, long *);
 
void main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   //sum =
    addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   
}
void addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   
}


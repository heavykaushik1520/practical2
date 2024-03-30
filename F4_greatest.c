//find the greatest of three using nested if else
//find greatest one among three numbers:
#include<stdio.h>
int findGreatest(int, int, int);
void main()
{
	int a,b,c,greatest;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	greatest=findGreatest(a,b,c);
	printf("Greatest number :%d",greatest);
}
int findGreatest(int num1, int num2, int num3)
 {
   int greatest;

   if (num1 >= num2) {
      if (num1 >= num3) {
         greatest = num1;
      }
      else {
         greatest = num3;
      }
   }
   else {
      if (num2 >= num3) {
         greatest = num2;
      }
      else {
         greatest = num3;
      }
   }

   return greatest;
}

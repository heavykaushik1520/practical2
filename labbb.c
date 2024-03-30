#include <stdio.h>
int PrimeNumber(int n);
int main() 
{
  int  max, i, flag;
  printf("Enter max value: ");
  scanf("%d",&max);
  for (i = 2; i < max; i++) 
  {
    flag = PrimeNumber(i);
    if (flag == 1)
	{
      printf("%d ", i);
    }
  }
  return 0;
}
int PrimeNumber(int n) 
{
  int j, flag = 1;
  for (j = 2; j < n; j++) 
  {
    if (n % j == 0) 
	{
      flag = 0;
      break;
    }
  }
  return flag;
}

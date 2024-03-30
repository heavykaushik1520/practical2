#include<stdio.h>
void main()
{
  int i, n, j, count;
  int arr[n];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nNow enter the elements of the array: ");
    for(i=0;i<n;i++)
    {       
    scanf("%d",&arr[i]);
    }
    printf("\nThe prime numbers in the array are: ");
    
  for(i=0;i<n;i++)
    {
    count=0;
    
  for(j=2;j<arr[i];j++)
  {
    if(arr[i]%j==0)
      {
          count=1;
          break;
      }
    }
    if(count==0)
  printf(" %d",arr[i]);
    }

}

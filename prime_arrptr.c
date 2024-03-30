#include<stdio.h>
void main()
{
  int i, n, j, count;
  int* ptr;
  
  int arr[n];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr = arr ;
    printf("\nNow enter the elements of the array: ");
    for(i=0;i<n;i++)
    {       
    scanf("%d",&ptr[i]);
    }
    
    printf("\nThe prime numbers in the array are: ");
    
  for(i=0;i<n;i++)
    {
    count=0;
    
  for(j=2;j< ptr[i];j++)
  {
    if(ptr[i]%j==0)
      {
          count=1;
          break;
      }
    }
    if(count==0)
  printf(" %d",ptr[i]);
    }

}

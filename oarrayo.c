//find the no in array
#include<stdio.h>
void main()
{
  int n,i,flag=0 , num;
  printf("Size of array: ");
  scanf("%d",&n);
  int arr[n];
  for(i = 0 ; i < n ; i++)
  {
  	scanf("%d",&arr[i]);
  }
  
  printf("Enter the element to search");
  scanf("%d",&num);
  
  for(i=0; i<n; i++)
  {
    if(arr[i]== num)
    {
    flag=1;
    break;
    }
  }
  if(flag==1)
  {
    printf("\nSearch found");
  }
  else
  {
    printf("\nSearch not found");
  }
  }

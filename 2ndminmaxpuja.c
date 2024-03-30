//Q.1 Find 2nd max and min element of array using pointer to array.
#include<stdio.h>
void main() {
  int num, i,min,secondMin,max,secondMax;
  int *ptr;
  printf("Enter the size of array: \n");
  scanf("%d",&num);
  int arr[num];
  ptr=arr;
  printf("Enter the elements of array: \n");
  for(i=0; i<num; i++) {
    scanf("%d",&ptr[i]);
  }
  min=ptr[0];
  secondMin=ptr[1];
  for(i=0; i<num; i++) {
    if(min>ptr[i]) {
      secondMin = min;
      min=ptr[i];
    }
  }
  for(i = 0; i < num; i++) {
    if(ptr[i] < secondMin && ptr[i] != min) {
      secondMin = ptr[i];
    }
  }
  printf("\nMinimum number of array is : %d\n",min);
  printf(" ");
  printf("\n2nd Minimum number of array is : %d\n",secondMin);
  max=ptr[0];
  secondMax=ptr[1];
  for(i=0; i<num; i++) {
    if(max<ptr[i]) {
      secondMax = max;
      max=ptr[i];
    }
  }
  for(i = 0; i < num; i++) {
    if(ptr[i] >secondMax && ptr[i] != max) {
      secondMax = ptr[i];
    }
  }

  printf("\nMaximum number of array is : %d\n",max);
  printf(" ");
  printf("\n2nd Maximum number of array is : %d\n",secondMax);
}

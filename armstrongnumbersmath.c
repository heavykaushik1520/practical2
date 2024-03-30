// TO find if the given number is Armstrong or not
#include<stdio.h>
void main(){
  int n=0,num=1,rem=1,n1,n2,n3,n4,sum =0;
  printf("Enter any number ");
  scanf("%d",&num);
  
  for (n1 = num; n1>0;n1++){
    n1= n1/10;
  }
  printf("power = %d",n);
  n2 = num;
  for (; n2>0;n2=n2/10){
    rem = n2%10;
    n4 = rem;
    for (n3=1;n3<n;n3++){
      rem = rem*n4;     
      }  
    sum = sum + rem;  
    }
    printf("\nsum = %d",sum);
    if(sum==num)
    printf("\n%d is Armstrong Number",num);
    else
    printf("\n%d is not Armstrong Number",num);

}
//1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474,

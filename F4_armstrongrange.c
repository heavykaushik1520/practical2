#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isArmstrong(int);
void main()
{
	int stno,enno,i;
	printf("enter the starting number and ending value:");
	scanf("%d%d",&stno,&enno);
	printf("Armstrong numbers between %d and %d:\n",stno,enno);
	for(i=stno;i<=enno;i++)
	{

		if(isArmstrong(i)){
			printf("%d ", i);
		}
	}
}
bool isArmstrong(int n){
	int sum = 0, originalNum = n;
	while(n!=0){
		sum += pow(n%10, (int)log10(originalNum) + 1);
		n/=10;
	}
	return sum == originalNum;
} 


//accept three digit number and calculate sum of its digit also reverse it
#include<stdio.h>                      
void reverseSum();                     //function declaration
void main()                            //calling function
{
    reverseSum();                      //call
}
void reverseSum()                      //called function
{
	int num,sum=0,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
{
	
	sum=sum + num%10;
	rev=(rev*10)+(num%10);
	num=num/10;
}
	printf("Sum of digit is %d\n ",sum);
	printf("Reverse of is %d ",rev);

}

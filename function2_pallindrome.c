//PALLINDROME NUMBER
#include<stdio.h>
int check_pallidrome();
void main()
{
	int x,temp; 
	x=check_pallidrome();
	if(x==temp)
	printf("The given number is pallidrome.");
	else
	printf("Given  number is not pallidrome.");
	
}
int check_pallidrome()
{
	int no,rem,reverse=0;
	int temp;
	printf("Enter the number: ");
	scanf("%d",&no);
	 temp=no;
	 while(no>0)
	 {
	 	rem=no%10;
	 	reverse=reverse*10 + rem;
	 	no=no/10;
	 }
	 if(reverse==temp)
	 return 1;
	 else
	 return 0;
}

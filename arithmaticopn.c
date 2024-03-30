// take a input and perform arithmatic operations on it
#include<stdio.h>
void main()
{
	// take two numbers x and y
	int x , y , action;
	printf("Enter two positive numbers : \n");
	scanf("%d%d", &x, &y);
	
	// choose an action to make operation
	printf("\n Input your action to make an operation\n");
	printf("\n1 :: for addition");
	printf("\n2 :: for substraction");
	printf("\n3 :: for multiplication");
	printf("\n4 :: for division");
	printf("\n5 :: for modulus");
	
	printf("\nEnter your action :");
	scanf("%d", &action);
	
	//choose an action and perfrom operation
	// it will perfrom operation according to users choice
	printf("\n");
	
	if(action==1)
	{
		printf("Addition of %d + %d = %d\n",x,y,x+y);
	}
	else if(action==2)
	{
		printf("Substraction of %d - %d = %d\n",x,y,x-y);
	}
	else if(action==3)
	{
		printf("Multiplication of %d*%d = %d\n",x,y,x*y);
	}
	else if (action==4)
	{
		printf("Division of %d / %d = %f\n",x,y,(float)x/y);
	}
	else if (action==5)
	{
		printf("Modulus of %d % %d = %d\n",x,y,x%y);
	}
	else 
	{
		printf(" Please input correct action.\n");
	}
	
}

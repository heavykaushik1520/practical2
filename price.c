// calculate gross salary of employee
#include<stdio.h>
void main()
{
	float price;
	float discount_price;
	float discount_amount;
	
	//ask for the discount price
	printf("\nEnter the discount price: ",discount_price);
	scanf ("%f",&discount_price);
	
	//ask for the discount amount
	printf("\nEnter the discount amount: ",discount_price);
	scanf("%f",&discount_amount);
	
	price = discount_price + discount_amount ;
	
	
}

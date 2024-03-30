#include<stdio.h>
double get_amount(double);
void main()
{
	double amount,amount_aftdis;
	double quantity,price;
	quantity =4;
	price=500;
	amount=price*quantity;
	printf("Net amount:%.2lf",amount);
	amount_aftdis=get_amount(amount);
	printf("\nDiscounted amount :%.2lf",amount_aftdis);
	
	
}
double get_amount(double amount)
{
	double discount;
	if(amount>999)
	{
		discount = amount*0.05;
		printf("\nDiscount = %.2lf",discount);
	}
	else if(amount>1999)
	{
		discount = amount*0.1;
		printf("\nDiscount = %.2lf",discount);
	}
	else
	{
		discount = 0;
		printf("\nDiscount = %.2lf",discount);	
	}
	amount=amount-discount;
    return amount;	
}

#include<stdio.h>
void main()
{
	double amount,quantity,price,discount;
	quantity = 4;
	price = 500;
	amount = price*quantity;
	printf("Net Amount = %.2lf\n",amount);
	
	
	if(amount>999)
	{
		discount = amount*0.05;
		printf("Discount = %.2lf",discount);
	}
	else if(amount>1999)
	{
		discount = amount*0.1;
		printf("Discount = %.2lf",discount);
	}
	else
	{
		discount = 0;
		printf("Discount = %.2lf",discount);	
	}
	amount=amount-discount;
    printf("\nAfter Discount Amount = %.2lf",amount);	
	
}

#include<stdio.h>
float student();
float nonstudent();
void main()
{
	int x,code;
	printf("Press 1 if you are student\n ""Press 2 if you are non student\n ");
	scanf("%d",&code);
    if(code==1)
  {
    x=student();
    printf("Total price is: %f",x);
  }
  if(code==2)
  {
    x=nonstudent();
    printf("Total price is: %f",x);
  }
	
}
float student()
{
	float price,quantity,total_amount,dis,total_profit;
	printf("Total Price : ");
	scanf("%f",&price);
	printf("\nEnter the quantity of product : ");
	scanf("%f",&quantity);
	total_amount=price*quantity;
	if(total_amount>500)
	{
		printf("\nTotal price without discount:%f",total_amount);
		dis = total_amount*0.2;
		printf("\n total profit :%f",total_profit);
		total_profit=total_amount-dis;
		return total_profit;
		
	}
	else
	{
		printf("\nTotal price without discount:%f",total_amount);
		dis = total_amount*0.1;
		printf("\n total profit :%f",total_profit);
		total_profit=total_amount-dis;
		return total_profit;
	}
}
float nonstudent()
{
	float price,quantity,total_amount,dis,total_profit;
	printf("Total Price : ");
	scanf("%f",&price);
	printf("\nEnter the quantity of product : ");
	scanf("%f",&quantity);
	total_amount=price*quantity;
	if(total_amount>600)
	{
		printf("\nTotal Price without discount :%f",total_amount);
	    dis=total_amount*0.15;
	    printf("Total Discount:%f",dis);
	    total_profit=total_amount-dis;
	    return total_profit;
	}
	else
	{
		printf("No Discount .\n");
		total_profit=total_amount;
		return total_amount;
		
	}
}

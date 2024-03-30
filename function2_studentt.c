/*Q10.Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a
student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.
But if he is not a student then if he has purchased more than 600 discount is 15% otherwise
there is not discount.*/
#include<stdio.h>
float student();
float notstudent();
void main()
{
  float code,x;
  printf("Press 1 if you are Student\n""Press 2 if your are not a student\n" );
  scanf("%f",&code);
  if(code==1)
  {
    x=student();
    printf("Total price is: %f",x);
  }
  if(code==2)
  {
    x=notstudent();
    printf("Total price is: %f",x);
  }
}
float student()
{
  float price,quant,totald,d,tp;
  printf("Enter the price: \n");
  scanf("%f",&price);
  printf("Enter the Quantity of product: \n");
  scanf("%f",&quant);
  totald=price*quant;
  if(totald>500)
  {
    printf("Total price without discount is: %f\n",totald);
    d=totald*0.2;
    printf("Total discount is: %f\n",d);
    tp=totald-d;
    return tp;
  }
  else
  {
    printf("Total price without discount is: %f\n",totald);
    d=totald*0.1;
    printf("Total discount is: %f\n",d);
    tp=totald-d;
    return tp;
  }
}
float notstudent()
{
  float price,quant,totald,d,tp;
  printf("Enter the price: \n");
  scanf("%f",&price);
  printf("Enter the Quantity of product: \n");
  scanf("%f",&quant);
  totald=price*quant;  
  if(totald>600)
  {
    printf("Total price without discount is: %f\n",totald);
    d=totald*0.15;
    printf("Total discount is: %f\n",d);
    tp=totald-d;
    return tp;
  }
  else
  {
    printf("No Discount\n");
    tp=totald;
    return tp;  
  }  
}

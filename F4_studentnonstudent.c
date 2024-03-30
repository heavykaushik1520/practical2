
#include<stdio.h>

float student(float price, float quant);
float notstudent(float price, float quant);

int main()
{
    float code, price, quant, total_price;

    printf("Press 1 if you are a student\nPress 2 if you are not a student\n");
    scanf("%f", &code);

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Enter the quantity of product: ");
    scanf("%f", &quant);

    if(code == 1)
    {
        total_price = student(price, quant);
        printf("Total price is: %.2f", total_price);
    }
    else if(code == 2)
    {
        total_price = notstudent(price, quant);
        printf("Total price is: %.2f", total_price);
    }

    return 0;
}

float student(float price, float quant)
{
    float total_d, d, tp;

    total_d = price * quant;

    if(total_d > 500)
    {
        printf("Total price without discount is: %.2f\n", total_d);
        d = total_d * 0.2;
        printf("Total discount is: %.2f\n", d);
        tp = total_d - d;
        return tp;
    }
    else
    {
        printf("Total price without discount is: %.2f\n", total_d);
        d = total_d * 0.1;
        printf("Total discount is: %.2f\n", d);
        tp = total_d - d;
        return tp;
    }
}

float notstudent(float price, float quant)
{
    float total_d, d, tp;

    total_d = price * quant;

    if(total_d > 600)
    {
        printf("Total price without discount is: %.2f\n", total_d);
        d = total_d * 0.15;
        printf("Total discount is: %.2f\n", d);
        tp = total_d - d;
        return tp;
    }
    else
    {
        printf("No Discount\n");
        tp = total_d;
        return tp;  
    }  
}


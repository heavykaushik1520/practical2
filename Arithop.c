#include <stdio.h>

void main()
{
    int num1, num2;
    int sum, diff, mul, div, mod, quo;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    mul = num1 * num2;
    mod = num1 % num2;
    quo = num1 / num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Multiply = %d\n", mul);
    printf("Modulus = %d\n", mod);
    printf("Quotient = %d\n", quo);
}

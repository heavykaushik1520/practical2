//make operations according to choice
#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

void main()
{   
    int ch, a, b, result;
  
    printf("Input the choices to make operations: ");
    printf("\n1 for addition.");
    printf("\n2 for subtraction.");
    printf("\n3 for multiplication.");
    printf("\n4 for quotient.");
    printf("\n5 for remainder.");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    printf("\n");
    
    if(ch == 1)
    {
        printf("Enter two numbers A and B respectively: ");
        scanf("%d%d", &a, &b);
        result = add(a, b);
        printf("Addition : %d\n", result);
    }
    else if(ch == 2)
    {
        printf("Enter two numbers A and B respectively: ");
        scanf("%d%d", &a, &b);
        result = sub(a, b);
        printf("Subtraction : %d\n", result);
    }
    else if(ch == 3)
    {
        printf("Enter two numbers A and B respectively: ");
        scanf("%d%d", &a, &b);
        result = mul(a, b);
        printf("Multiplication : %d\n", result);
    }
    else if(ch == 4)
    {
        printf("Enter two numbers A and B respectively: ");
        scanf("%d%d", &a, &b);
        if(b == 0)
        {
            printf("Division by zero error!\n");
        }
        else
        {
            result = div(a, b);
            printf("Division: %d\n", result);
        }
    }
    else if(ch == 5)
    {
        printf("Enter two numbers A and B respectively: ");
        scanf("%d%d", &a, &b);
        if(b == 0)
        {
            printf("Division by zero error!\n");
        }
        else
        {
            result = mod(a, b);
            printf("Remainder : %d\n", result);
        }
    }
    else
    {
        printf("Invalid choice!\n");
    }


}
 
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}


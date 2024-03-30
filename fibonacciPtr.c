#include <stdio.h>

void fibonacci(int , int*, int*, int*);

void main()
{
    int n, i, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++)
    {
        fibonacci(i, &a, &b, &c);
        printf("%d ", c);
    }


}

void fibonacci(int n1, int *a1, int *b1, int *c1)
{
    if (n1 == 0)
    {
        *c1 = *a1;
    }
    else if (n1 == 1)
    {
        *c1 = *b1;
    }
    else
    {
        *c1 = *a1 + *b1;
        *a1 = *b1;
        *b1 = *c1;
    }
}


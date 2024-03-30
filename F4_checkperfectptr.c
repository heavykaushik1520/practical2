#include <stdio.h>
int* check_perfect(int*);
void main()
{
    int a;
    printf("Enter a number to check whether it is perfect or not: ");
    scanf("%d", &a);

    int* ptr = &a;
    int* result = check_perfect(ptr);

    if (*result == *ptr) {
        printf("%d is a perfect number.", *ptr);
    } else {
        printf("%d is not a perfect number.", *ptr);
    }
}

int* check_perfect(int* ptr1)
{
    int sum = 0, i;
    for (i = 1; i < *ptr1; i++)
    {
        if (*ptr1 % i == 0)
        {
            sum += i;
        }
    }

    *ptr1 = sum;

    if (*ptr1 == *(&sum)) {
        return ptr1;
    } else {
        return &sum;
    }
}


#include<stdio.h>

void sum_natural(int*, int*);

void main() {
    int stno, enno, n,result = 0;
    printf("Enter the range: ");
    scanf("%d%d", &stno, &enno);

    for(n = stno; n <= enno; n++) 
	{
        sum_natural(&n, &result);
    }

    printf("Sum of numbers in given range: %d\n", result);
    
}

void sum_natural(int* n1, int* result) 
{
    *result += *n1;
}



#include<stdio.h>

void perfect_range(int, int);

void main()
{
    int mn, mx;
    printf("Input the starting range or number : ");
    scanf("%d", &mn);
    printf("Input the ending range of number : ");
    scanf("%d", &mx);
    perfect_range(mn, mx);
}

void perfect_range(int mn, int mx)
{
    int n, sum, i;
    printf("Perfect number in given range: ");
    for (n = mn; n <= mx; n++)
    {
        sum = 0;
        i = 1;
        while (i < n)
        {
            if (n % i == 0)
                sum = sum + i;
            i++;
        }
        if (sum == n)
            printf("%d ", n);
    }
    printf("\n");
}


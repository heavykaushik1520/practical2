// check perfect number in the given range 1 to n?
#include <stdio.h>
void perfect_range(int , int );


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
	int n;
    printf("Perfect numbers in given range: ");
    for ( n = mn; n <= mx; n++)
    {
        int i,sum = 0;
        for ( i = 1; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            printf("%d ", n);
        }
    }
    printf("\n");
}



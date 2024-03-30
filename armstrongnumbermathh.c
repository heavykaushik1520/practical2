#include<stdio.h>
#include<math.h>
void main()
{    
    int i, power;
    printf("Armstrong Numbers between 1-1000 are:\n");
  
    for ( i = 1; i < 1000; ++i)
	{
        int x = i;
        int n = 0;
  
        // number of digits calculation
        while (x != 0) 
		{
            x = x/10;
            ++n;
        }
        int powersum = 0;
        x = i;
  
        // finding the sum of nth
        // power of its digits
        while (x != 0)
		{
            int digit = x % 10;
            powersum += power(digit, n);
            x /= 10;
        }
        // checking if the obtained
        // number is armstrong or not
        if (powersum == i)
  
            // printing the result
            printf("%d ", i);
    }
    printf("\n");
    
}

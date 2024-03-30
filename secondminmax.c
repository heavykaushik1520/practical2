#include<stdio.h>
void main()
{
    int a[5] , i , min , max, min2, max2;
    printf("Enter 5 elements array: ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    min2 = max2 = a[0];
    for(i = 1 ; i < 5 ; i++)
    {
        if(min > a[i])
        {
            min2 = min;
            min = a[i];
        }
        else if( min2 > a[i])
        {
            min2 = a[i];
        }
        if(max < a[i])
        {
            max2 = max;
            max = a[i];
        }
        else if(max2 < a[i])
        {
            max2 = a[i];
        }
    }
    
    printf("Minimum value element is %d\n",min);
    printf("Second minimum value element is %d\n",min2);
    printf("Maximum value element is %d\n", max);
    printf("Second maximum value element is %d\n", max2);
}


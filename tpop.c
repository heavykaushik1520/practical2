#include<stdio.h>
void main()
{
    int a[5] , i , min , max, sec_min, sec_max;
    printf("Enter 5 elements array: ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    sec_min=sec_max=a[0];
    for(i = 1 ; i < 5 ; i++)
    {
        if(min > a[i])
        {
            sec_min = min;
            min = a[i];
        }
        else if(sec_min > a[i])
        {
            sec_min = a[i];
        }
        if(max < a[i])
        {
            sec_max = max;
            max = a[i];
        }
        else if(sec_max < a[i])
        {
            sec_max = a[i];
        }
    }
    
    printf("Minimum value element is %d\n",min);
    printf("Second minimum value element is %d\n",sec_min);
    printf("Maximum value element is %d\n", max);
    printf("Second maximum value element is %d\n", sec_max);
}


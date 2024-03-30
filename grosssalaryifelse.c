/**
 * C program to calculate gross salary of an employee
 */

#include <stdio.h>

void main()
{
    float basic, gross, da, ta , hra;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 5000)
    {
        da  = basic * 0.1;
        ta  = basic * 0.2;
        hra = basic * 0.25;
    }
    
    else
    {
        da  = basic * 0.15;
        ta  = basic * 0.25;
        hra = basic * 0.30;
    }

    /* Calculate gross salary */
    gross = basic + hra + da - ta ;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    
}

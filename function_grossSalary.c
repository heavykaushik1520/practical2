#include<stdio.h>
//function declaration
void gross_Salary();

void main()                                     //calling function
{
	gross_Salary();
}
//function defination
void gross_Salary()                             // called function
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

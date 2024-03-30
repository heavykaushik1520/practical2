//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively  otherwise  da, ta and hra will be 15%,25% and 30% respectively. 
#include<stdio.h>
void gross_Salary(float ,float,float,float);
void main()
{
	float basic, ha, ta, dra;
    printf("Enter the basic salary: ");
    scanf("%f",&basic);
    gross_Salary(basic,ha,ta,dra);
}
void gross_Salary(float basic,float ha, float ta, float dra)
{
	float gross;
	if(basic <= 5000)
    {
        dra  = basic * 0.1;
        ta  = basic * 0.2;
        ha = basic * 0.25;
    }
    
    else
    {
        dra  = basic * 0.15;
        ta  = basic * 0.25;
        ha = basic * 0.30;
    }

    /* Calculate gross salary */
    gross = basic + ha + dra - ta ;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);
	
}

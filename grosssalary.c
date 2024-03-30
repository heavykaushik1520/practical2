//calculate the gross salary 
#include<stdio.h>
void main()
{
	float basic , hra , da , gross ;
	printf("Enter the basic salary : ");
	scanf("%.2f",&basic);
	
	hra = 40*basic/100;
	da  = 50*basic/100;
	//gross salary

	gross = basic + hra + da ;
	printf("The Gross salary is = %f",gross);
	
}

#include<stdio.h>
void main()
{
	int x,y,z,g;
	x = 15;
	y = 21;
	z = 9;
	
	// for the greatest value 
	g = (x>y)?((x>z)?x:z):((y>z)?y:z);
	printf("The greatest number is : %d",g);
}

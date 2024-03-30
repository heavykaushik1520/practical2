//AREA AND PERIMETER OF RECTANGLE
#include<stdio.h>
void calculate();                                      //function declaration

void main()                                            //calling function
{
	calculate();                                        //call
}
void calculate()                                        //called function
 {
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);
}

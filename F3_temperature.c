//Finding F from C (temp). 
#include <stdio.h>
void temperature_converter(float);                           //function declaration
void main()                                            //calling function
{
	float celsius;
	printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
	temperature_converter(celsius);                           //call 
}

void temperature_converter(float celsius)                           //called function
 {                         
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahreneit = %.2f Fahrenheit\n", fahrenheit);
}



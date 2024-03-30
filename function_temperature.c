#include <stdio.h>
void temperature_converter();                           //function declaration
void main()                                            //calling function
{
	temperature_converter();                           //call 
}

void temperature_converter()                           //called function
 {                         
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}



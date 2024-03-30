//choose any function among even odd and calculate gross salary
#include<stdio.h>
int evenodd(int);
float calculateGrossSalary(float);
// Main function to get user input and call appropriate function
void main() 
{
    int choice, num;
    float basicSalary, grossSalary;
    
    printf("Input your choice:\n");
    printf("1. Even/Odd\n");
    printf("2. Basic Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        evenOdd(num);
    } else if (choice == 2) {
        printf("Enter the basic salary: ");
        scanf("%f", &basicSalary);
        grossSalary = calculateGrossSalary(basicSalary);
        printf("GROSS SALARY OF EMPLOYEE = %.2f\n", grossSalary);
    } else {
        printf("Invalid choice!\n");
    }
    
}

// Function to check if a number is even or odd
int evenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return num;
}

// Function to calculate gross salary based on basic salary
float calculateGrossSalary(float basicSalary) {
    float ha, dra, ta, gross;
    
    if (basicSalary <= 5000) {
        dra = basicSalary * 0.1;
        ta = basicSalary * 0.2;
        ha = basicSalary * 0.25;
    } else {
        dra = basicSalary * 0.15;
        ta = basicSalary * 0.25;
        ha = basicSalary * 0.30;
    }
    
    gross = basicSalary + ha + dra + ta;
    
    return gross;
}

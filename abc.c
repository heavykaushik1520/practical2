#include <stdio.h>

// Function declarations
int even_odd();
float basic_salary();

void main() {
    int choice;

    // Display the menu
    printf("Menu:\n");
    printf("1. Even or Odd\n");
    printf("2. Basic Salary\n");
    printf("Enter your choice: ");

    // Take user input
    scanf("%d", &choice);

    // Perform desired operation based on user's choice
    switch (choice) {
        case 1:;
            int f=even_odd();
            printf(((!f)?"Odd":"Even"));
            break;
        case 2:;
            float gross_salary = basic_salary();
            printf("Gross Salary is %.2f ",gross_salary);
            break;
        default:
            printf("Invalid choice\n");
    }

    
}

// Function to determine if a number is even or odd
int even_odd() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
//        printf("%d is even\n", num);
          return 1;
    } else {
//        printf("%d is odd\n", num);
          return 0;
    }

   // return 0;
}

// Function to calculate gross salary from basic salary
float basic_salary() {
    float basic_salary, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate gross salary
    gross_salary = basic_salary + (basic_salary * 0.2) + (basic_salary * 0.3);

//    printf("Gross salary: %.2f\n", gross_salary);
    return gross_salary;

    //return 0;
}


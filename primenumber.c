#include <stdio.h>

void main() {
    int num, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num / 2) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (num == 1) {
        printf("1 is neither prime nor composite.");
    } 
    else {
        if (flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
    }
    
}


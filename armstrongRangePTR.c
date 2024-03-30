#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void isArmstrong(int*);

int main() {
    int stno, enno, temp, i;
    printf("Enter the starting number and ending value: ");
    scanf("%d%d", &stno, &enno);
    printf("Armstrong numbers between %d and %d:\n", stno, enno);

    for (i = stno; i <= enno; i++) {
        if (isArmstrong(&i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

void isArmstrong(int* n) {
    int sum = 0, originalNum = *n;
    while (*n != 0) {
        sum += pow(*n % 10, 3);
        (*n) /= 10;
    }
   // return sum == originalNum;
}


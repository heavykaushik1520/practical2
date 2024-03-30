#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    int i;
    for ( i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a[10], i;
    printf("Enter an array with 10 elements: ");
    for(i = 0 ; i < 10 ; i++) {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers in the array: ");
    for(i = 0 ; i < 10 ; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}


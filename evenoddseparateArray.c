#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter the array with %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nFind out even numbers from array: ");
    int ptr2[n];
    for (i = 0; i < n; i++) {
        if (ptr[i] % 2 == 0) {
            even++;
            ptr2[even - 1] = ptr[i];
            printf("%d ", ptr[i]);
        }
    }

    printf("\nFind out odd numbers from array: ");
    int ptr3[n];
    for (i = 0; i < n; i++) {
        if (ptr[i] % 2 == 1) {
            odd++;
            ptr3[odd - 1] = ptr[i];
            printf("%d ", ptr[i]);
        }
    }
    return 0;
}


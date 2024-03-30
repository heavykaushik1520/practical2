//screen visible h?

#include<stdio.h>

void main() {
        int n, i, j, count;

        printf("Size of Array: ");
        scanf("%d", & n);

        int occ[1000] = {0}; // This will give u runtime error if array element >= 1000 i. e <1000 is maximum number >> limit

        int arr[n];

        printf("Array: ");
        for (i = 0; i < n; i++) {
                scanf("%d", & arr[i]);

        }
        for (i = 0; i < n; i++) {
                occ[arr[i]]++;
        }
        printf("Occurrence of elements in the array:\n");
        for (i = 0; i < 1000; i++) {
                if (occ[i] != 0) {
                        printf("%d occurs %d times.\n", i, occ[i]);
                }
        }

}

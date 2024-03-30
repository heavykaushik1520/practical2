//screen visible h?

#include<stdio.h>
void main() {
    int n, i, j, count;
    
    printf("Size of Array: ");
    scanf("%d", &n);
    
    int occ[n];
    int arr[n];
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        occ[i] = -1;
    }
    
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                occ[j] = 0;
                count++;
            }
        }
        if (occ[i]) {
            occ[i] = count;
        }
    }
    
    printf("Occurrence of elements in the array:\n");
    for (i = 0; i < n; i++) {
        if (occ[i] != 0) {
            printf("%d occurs %d times.\n", arr[i], occ[i]);
        }
    }
    
    
}


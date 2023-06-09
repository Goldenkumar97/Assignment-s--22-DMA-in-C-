/*10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    max = min = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("Maximum element in the array is %d\n", max);
    printf("Minimum element in the array is %d\n", min);

    free(ptr);
    return 0;
}
/*6. Write a program in C to find the largest element using Dynamic Memory Allocation*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *ptr, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (float*)calloc(n, sizeof(float));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%f", ptr + i);
    }

    max = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element in the array is %.2f\n", max);

    free(ptr);
    return 0;
}
/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
#include "stdio.h"
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        exit(0);
    }

    printf("Memory allocation successful\n");

    free(ptr);
    return 0;
}

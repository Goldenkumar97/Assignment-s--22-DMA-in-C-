//8. Write a program to demonstrate dangling pointers in C.
#include"stdio.h"
#include"stdlib.h"
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    *ptr=20;
    printf("Before free = %d",*ptr);
    free(ptr);
    printf("\n After free = %d ",*ptr);
    return 0;
}
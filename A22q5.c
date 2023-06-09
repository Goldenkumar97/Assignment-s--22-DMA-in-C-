/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include"stdio.h"
#include"stdlib.h"
int main()
{
    int  *ptr;
    int i=0,sum=0,size=0; 
    printf(" Enter size of array ");
    scanf("%d",&size);
    ptr=(int * )calloc (size,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed \n");
    }
    printf("\n The entered %d values \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr +i);
    }
    printf("Sum of all elememt is =%d \n",sum);
    free(ptr);
    return 0;
}
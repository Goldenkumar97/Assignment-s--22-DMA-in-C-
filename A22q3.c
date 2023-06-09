/*3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.*/
#include"stdio.h"
#include"stdlib.h"
int main()
{
    int  *ptr;
    int i=0,sum=0,size=0; 
    printf(" Enter size of array ");
    scanf("%d",&size);
    ptr=(int * )malloc (sizeof(int));
    printf("\n The entered %d values \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr +i);
    }
    printf("Sum is =%d \n",sum);
    free(ptr);
    return 0;
}
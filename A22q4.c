/*4. Write a program to input and print text using dynamic memory allocation.*/
#include"stdio.h"
#include"stdlib.h"
int main()
{
    char *ptr , c;
    int i=0,j=1;
    ptr=(char*)malloc(sizeof(char));
    printf(" Enter string ");
    while (c != '\n')
    {
    c=getc(stdin);
    j++;
    ptr=( char* ) realloc(ptr ,j * sizeof(char));
    ptr[i]=c;
    i++;
    }
    ptr[i]='\0';
    printf("The enter string is = %s",ptr);

}

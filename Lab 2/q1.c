/*Write a C program to check if the underlying architecture is little endian or big endian.*/
#include <stdio.h>  
int main()
{
    int value=1;
    char *r = (char *) &value;
    if (*r == 1) 
        printf("Underlying architecture is little endian\n");
    else
        printf("Underlying architecture is big endian\n");
    return 0;
}
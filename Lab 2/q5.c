/*WAP to convert from 32-bit imputed number from little endian to big endian and vice-versa.*/
#include <stdio.h>
int convert_Endian(unsigned int number)
{
    unsigned int byte1, byte2, byte3, byte4;
    byte1 = (number & 0x000000FF) >> 0;
    byte2 = (number & 0x0000FF00) >> 8;
    byte3 = (number & 0x00FF0000) >> 16;
    byte4 = (number & 0xFF000000) >> 24;
    return ((byte1 << 24) | (byte2 << 16) | (byte3 << 8) | (byte4 << 0));
}
int main(){
    unsigned int number,covertedNumber;
    printf("Enter the number : ");
    scanf("%X",&number);
    printf("\nBefore converting : 0x%X",number);
    covertedNumber=convert_Endian(number);
    printf("\nAfter converting : 0x%X",covertedNumber);
    return 0;
}

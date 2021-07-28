/*Extract first two bytes (1st and 2nd) from a 4-byte input data.*/
#include <stdio.h>
int main()
{
    unsigned int value = 0x11223344;
    unsigned char firstByte, secondByte;
    firstByte = (value & 0xFF);
    secondByte = ((value >> 8) & 0xFF);
    printf("First Byte , a= %02X\n", firstByte);
    printf("Second Byte , b= %02X\n", secondByte);
    return 0;
}
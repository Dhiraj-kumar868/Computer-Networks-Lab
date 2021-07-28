/*Extract last two byte (3rd and 4th Octet) from a 4-byte input data.*/
#include <stdio.h>
int main()
{
    unsigned int value = 0x11223344;
    unsigned char thirdByte, fourthByte;
    thirdByte = ((value >> 16) & 0xFF); 
    fourthByte = ((value >> 24) & 0xFF); 
    printf("Third Byte , a= %02X\n", thirdByte);
    printf("Fourth Byte , b= %02X\n", fourthByte);
    return 0;
}
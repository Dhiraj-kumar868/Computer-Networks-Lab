/*WAP to SWAP the 2nd and 3rd byte data from 32-bit imputed data.*/
#include <stdio.h>
int main()
{
    unsigned int data = 0x11223344;
    unsigned char byte1,byte2,byte3,byte4;
    printf("\nData before swapping : %08X", data);
    byte1=(data & 0xFF);
     byte2=((data >> 8) & 0xFF);
     byte3=((data >> 16) & 0xFF);
    byte4=((data >> 24) & 0xFF);
    data=((byte1<<0) | (byte2<<16) | (byte3<<8) | (byte4<<24));
    printf("\nData after swapping  : %08X", data);
    return 0;
}
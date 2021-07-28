/*WAP to compare two strings without using library function.*/


#include<stdio.h>
int main() {
   char str1[20], str2[20];
   int i;
 
   printf("Enter two strings :");
   gets(str1);
   gets(str2);
 
   i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
 
   return (0);
}

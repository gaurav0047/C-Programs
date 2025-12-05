/*
Write a C program to print following pattern::
   AaBbCcDdEe ЕЕЕЕ.Zz
*/

#include <stdio.h>
int main(void)
{
  /*for(int i = 0; i < 26; ++i)
  {
    printf("%c%c", i+65, i+97);
  } */
  /*
  for(int i=65; i<=90; ++i)
    printf("%c%c", i,i+32);
    */
  for (int i = 'A'; i <= 'Z'; ++i)
    printf("%c%c", i, i + 32);

  return 0;
}
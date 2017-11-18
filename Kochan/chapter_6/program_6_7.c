// Program to convert a positive integer to another base
#include <stdio.h>

int main (void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // get the number and the base

   printf ("Give me a number to convert ");
   scanf ("%ld", &numberToConvert);

   printf ("\nBase please ");
   scanf("%i", &base);

   // convert to the indicated base
   do {
       convertedNumber[index] = numberToConvert % base;
       ++index;
       numberToConvert /= base;
   } while (numberToConvert != 0);

   // display results in reverse order

   printf ("Converted number = ");

   for (--index; index >= 0; --index) {
       nextDigit = convertedNumber[index];
       printf ("%c", baseDigits[nextDigit]);
   }
   printf ("\n");
   return 0;
}


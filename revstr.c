#include<stdio.h>
#include<string.h>
int main()
{
   char string [100], temp; // declaration of character variables
   int i, j = 0; // declaration of integer variable
   gets(string ); // string input
   i = 0;
   j = strlen(string ) - 1; // counting the length
   while (i < j) // for reversing string
   {
      temp = string [i];
      string [i] = string [j];
      string [j] = temp;
      i++;
      j--;
   }
   printf("%s", string ); // Output
   return (0);
}
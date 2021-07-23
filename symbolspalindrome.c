/*
Input : str = “ma,l.ay,.a..l.am” 
Output : YES 
The characters in the string form the sequence “malayalam”, which is a palindrome.

Create two utility functions to get the first and last position of characters present in the string.
Start traversing the string, and keep finding the position of the first and last characters every time.
If the first and last characters are the same for every iteration and the string is traversed completely, 
    then print YES, otherwise print NO.
*/

#include<stdio.h>
#include<string.h>
int firstPos(char str[], int start, int end)
{
    int firstChar = -1,i;
    for (i = start; i <= end; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||(str[i]>='A' && str[i]<='Z')) {
            firstChar = i;
            break;
        }
    }
 
    return firstChar;
}
 
// Utility function to get the position of
// last character in the string
int lastPos(char str[], int start, int end)
{
    int lastChar = -1;
 
    // Get the position of last character
    // in the string
    for (int i = start; i >= end; i--) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||(str[i]>='A' && str[i]<='Z'))  {
            lastChar = i;
            break;
        }
    }
 
    return lastChar;
}
 
int isPalindrome(char str[])
{
    int firstChar = 0, lastChar = strlen(str) - 1;
    int ch=1;
    for (int i = 0; i < strlen(str); i++) {
        firstChar = firstPos(str, firstChar, lastChar);
        lastChar = lastPos(str, lastChar, firstChar);
 
        // break, when all letters are checked
        if (lastChar < 0 || firstChar < 0)
            break;
        if (str[firstChar] == str[lastChar]) {
            firstChar++;
            lastChar--;
            continue;
        }
 
        // if mismatch found, break the loop
        ch = 0;
        break;
    }
 
    return (ch);
}
 
// Driver code
int main()
{
    char str[100];
    scanf("%s",str);
    if (isPalindrome(str))
        printf("YES");
    else
        printf("NO"); 
    return 0;
}
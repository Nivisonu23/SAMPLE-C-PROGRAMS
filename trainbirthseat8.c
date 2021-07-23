/*
Check if seat number is valid seat number or not(i.e in range of 1 to 72). 
if (seat_number % 8) equals 1 or 4, then berth is a lower berth
if (seat_number % 8) equals 2 or 5, then berth is a middle berth
if (seat_number % 8) equals 3 or 6, then berth is an upper berth
if (seat_number % 8) equals 7, then berth is a side lower berth
if (seat_number % 8) equals 0 then berth is a side upper berth
*/
#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if (s > 0 && s < 73)
        if (s % 8 == 1 || s % 8 == 4)
            printf("%d is lower berth\n", s);
             
        else if (s % 8 == 2 || s % 8 == 5)
            printf("%d is middle berth\n", s);
             
        else if(s % 8 == 3 ||s % 8 == 6)
            printf("%d is upper berth\n", s);
             
        else if(s % 8 == 7)
            printf("%d is side lower berth\n", s);
             
        else
            printf("%d is side upper berth\n", s);
             
    else
        printf("%d invalid seat number\n", s);
}
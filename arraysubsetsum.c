/*
Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

Example: 

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True  
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output: False
There is no subset that add up to 30.
*/

#include<stdio.h>
int main()
{
    int n,sum,row,col;
    n=4;
    int a[]={1,2,13,3};
    sum=5;
    int dp[n][sum+1];
    for(row=0;row<n;row++)
    {
        for(col=0;col<=sum;col++)
        {
            if(col==0)
                dp[row][col]=1;
            else if(row==0)
            {
                if(a[row]==col)
                    dp[row][col]=1;
                else    
                    dp[row][col]=0;
            }
            else
            {
                if(a[row]>col)
                    dp[row][col]=dp[row-1][col];
                else    
                    dp[row][col]=dp[row-1][col] || dp[row-1][col-a[row]];
            }
        }
    }
    for(row=0;row<n;row++,printf("\n"))
    {
        for(col=0;col<=sum;col++)
            printf("%d ",dp[row][col]);
    }
    printf("\n");
    if(dp[n-1][sum]==1)
        printf("True");
    else    
        printf("False");
}
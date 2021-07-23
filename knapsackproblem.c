/*
Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 
In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items 
respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of 
the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it 
(0-1 property).
W   V   Capacity = 9
2   10
7   13  
4   12
1   24
3   18
5   21
*/

#include<stdio.h>
int max(int n1,int n2);
int main()
{
    int n=6,i,j,c=9,n1,n2;
    int wt[]={2,7,4,1,3,5},val[]={10,13,12,24,18,21},dp[n+1][c+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else
            {
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                {
                    n1=dp[i-1][j];
                    n2=dp[i-1][j-wt[i-1]]+val[i-1];
                    dp[i][j]=max(n1,n2);
                }
            }
        }
    }
    for(i=0;i<=n;i++,printf("\n"))
    {
        for(j=0;j<=c;j++)
        {
            printf("%d ",dp[i][j]);
        }
    }
}
int max(int n1,int n2)
{
    return n1>n2?n1:n2;
}

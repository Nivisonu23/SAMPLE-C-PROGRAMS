/*
M is alone and he has an array a1,a2,...,an. M wants to choose two integers i,j such that i≠j,1≤i,j≤n and the value ai&aj (bitwise AND)is maximum.

What is the maximum value M can get?

Input Format
Input

First line contains only n, legnth of array.

Second line contains the array elements a1,a2,...,an separated by space.

Output Format
Output

The only line of output contains an integer, maximum value value that M can get.
*/
#include<stdio.h>
int main()
{
    int n,i,arr[100],j,m,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i = 0; i < n; i++)
	{
		if (arr[i] <= m)
		{
			continue;
		}
		for (j = i + 1; j < n; j++)
		{
			int temp = arr[i] & arr[j];
			if(temp > m)
			{
				m = temp;
			}
		}
	}
	printf("%d", m);
}

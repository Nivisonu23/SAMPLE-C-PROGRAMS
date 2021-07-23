/*
Given an array A of integers,find the maximum of j - i subjected to the constraint of A[i] <= A[j]
Example : 

Input Array : [3 5 4 2]
Output : 2  for the pair (3, 4)
*/

#include <stdio.h>
#include<limits.h>
#include<malloc.h>
int main() 
{
    int cases,tc,start,end,max,size,ctr;
    int*arr=NULL;
//scanf("%d",&cases);
//for(tc=0;tc<cases;tc++)
    scanf("%d",&size);
    max=INT_MIN;
    arr=(int*)calloc(size,sizeof(int));
    for(ctr = 0; ctr<size;ctr++)
    scanf("%d ",&arr[ctr]);
    for(start=0;start<size;start++)
    {
        for(end=size-1;end>=start;end--)
        {
            if((end-start)>=max && arr[start]<=arr[end])
                max= end-start;
        }
    }
    printf("%d\n",max);
    free(arr);
    return 0;
}
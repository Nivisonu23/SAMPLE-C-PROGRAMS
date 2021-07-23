#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bus(int n,int m[],int len){
    int min=INT_MAX;
    int maxArray[100];
    int i,j;

    for(i=1;i<=n;i++){
        for(j=0;j<len;j++){
            int MIN = i>m[j] ? (i-m[j]) : m[j] -i;
            if(MIN<min){
                min = MIN;
            }
        }
        maxArray[i-1] = min;
        min =INT_MAX;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(maxArray[i]>maxArray[j]){
                swap(&maxArray[i],&maxArray[j]);
            }
        }
    }
    printf("%d",maxArray[0]);
}

int main()
{
    int n=5;
    int m[] = {1,5};
    int len = 2;
    bus(n,m,len);
    return 0;
}

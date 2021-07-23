/*
Problem

Don has n hammers. The hammer i has attack power Pi. He needs to destroy a wooden door, the strength of which is d. When a hammer with power Pi strikes the door, the strength of the door is decreased by Pi (if d<pi, then d becomes 0) and the attack power of the hammer becomes floor(Pi/2).
Don has k trials, and he has to break the doors within those k trials.
If it is not possible, print -1.
If possible, print the least number of hits required.

Input Format
Input:

    First line contains 3 integers, n, d, k;
    Second line contains n space separated positive integers, denoting the powers of the n hammers.

Output Format
Output:

    Print the number of attacks required(less than or equal to k).
    Or -1 if it is not possible to destroy the door within k trials.
*/
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#define pcx putchar_unlocked
#define gcx getchar_unlocked
typedef long int lint;

lint getli () {
    lint n =0;
    register int c = gcx();
    while(c<'0' || c>'9') c = gcx();
    while(c>='0' && c<='9') {
        n = n * 10 + c-'0';
        c = gcx();
    }
    return n;
}
void putnli (lint n, char lc) {
	if (0 == n) {
		pcx('0'); if(lc) pcx(lc); return;
	} else if (n < 0) {
		pcx ('-'); n = ~n +1;
	}
	char s[24]; lint rdi =-1;
	while (n) {
		s[++rdi] = '0' + n % 10;
		n /= 10;
	}
	while (rdi>=0) pcx(s[rdi--]);
	if(lc) pcx(lc);
}
#define swap(X,Y) X^=Y^=X^=Y
lint zSz, zH[1000001];
void pushMaxHeap (lint X) {    // 1-indexed
    zH[++zSz] = X;
    for(lint I=zSz; I>1 && (zH[I>>1] < zH[I]); I >>= 1)
        swap(zH[I>>1], zH[I]);
}
void maxHeapify (lint I) {  // 1-indexed
    lint lft = (I<<1);
    lint rgt = (I<<1) +1;
    lint maxI = (lft <= zSz && zH[lft] > zH[I])? lft : I;
    if (rgt <= zSz && zH[rgt] > zH[maxI]) maxI = rgt;
    if (maxI != I) {
        swap (zH[I], zH[maxI]);
        maxHeapify (maxI);
    }
}
lint extHeapMax () {   // 1-indexed (delete zeros)
    zH[1] = zH[zSz--];
    maxHeapify (1);
}

int main () {
    lint N = getli();
    lint D = getli();
    lint T = getli();
    for (lint ni=0; ni++<N; ) pushMaxHeap (getli());
    lint Tk = T +1;
    while (--Tk) {
        if (!zH[1]) break; //all hammers exhausted
        D -= zH[1];
        if (D < 1) break;
        zH[1] >>= 1;
        if (!zH[1]) extHeapMax();
        else maxHeapify(1);
    }
    if (D<1) putnli (T-Tk+1, 0);
    else putnli (-1, 0);

    return 0;
}

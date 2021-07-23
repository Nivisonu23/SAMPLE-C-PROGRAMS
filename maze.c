#include<stdio.h>
#include<stdlib.h>
int sol[4][4];
int findpath(int **mat,int row,int col)
{
    if(mat[row][col]==9) 
        return 1;
     if(mat[row][col]==1)
    {
        sol[row][col]=1;
        if(col<3 && sol[row][col+1]!=1 && findpath(mat,row,col+1)==1)
            return 1;
        if(row<3 && sol[row+1][col]!=1 && findpath(mat,row+1,col)==1)
            return 1;
        if(col>0 && sol[row][col-1]==0 && findpath(mat,row,col-1)==1)
            return 1;
        if(row>0 && sol[row-1][col]==0 && findpath(mat,row-1,col)==1)
            return 1;
        sol[row][col]=0;
        return 0;
    }
    return 0;       
}

int main()
{
    int col,row;
    int **mat;
    mat=(int**)malloc(4*sizeof(int*));
    for(row=0;row<4;row++)
        mat[row]=(int*)malloc(4*sizeof(int));
    for(row=0;row<4;row++)
        for(col=0;col<4;col++)
            scanf("%d",&mat[row][col]);
    if(findpath(mat,0,0)==1)
        printf("Path found");
    else
        printf("No path");
    return 0;
}


/*
int visit[4][4]={0};
int maze(int **path,int row,int col)
{
    if(path[row][col]==9)
    {
        visit[row][col]=1;
        return 1;
    }
    if(path[row][col]==1)
    {
        visit[row][col]=1;
        if(col+1<4 && visit[row][col+1]==0 && maze(path,row,col+1)==1)
            return 1;
        if(row+1<4 && visit[row+1][col]==0 && maze(path,row+1,col)==1)
            return 1;
        if(col-1>=0 && visit[row][col-1]==0 && maze(path,row,col-1)==1)
            return 1;
        if(row-1>=0 && visit[row-1][col]==0 && maze(path,row-1,col)==1)
            return 1;
        visit[row][col]=0;
        return 0;
    }
    else    return 0;
}
void print()
{
    int row,col;
    for(row=0;row<4;row++,printf("\n"))
        for(col=0;col<4;col++)
            printf("%d ",visit[row][col]);
}
int main()
{
    int **path,row,col;
    path=(int**)malloc(4*sizeof(int*));
    for(row=0;row<4;row++)
        path[row]=(int*)malloc(4*sizeof(int));
    for(row=0;row<4;row++)
        for(col=0;col<4;col++)
            scanf("%d",&path[row][col]);
    printf("\n\n");
    if(maze(path,0,0)==1)
        print();
    else    
        printf("No path");
    return 0;
}
*/
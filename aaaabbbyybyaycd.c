/*
15
aaabbbyybyaaycd

acd 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
typedef struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
}Stack;

Stack* createStack(unsigned capacity)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int*)malloc(stack->capacity*sizeof(Stack));
    return stack;
}

int isFull(Stack* stack)
{
    return (stack->top+1) == stack->capacity;
}

int isEmpty(Stack* stack)
{
    return stack->top ==-1;
}

int pop(Stack* stack)
{
    if(isEmpty(stack))
        return INT_MIN;
    return stack->arr[stack->top--];
}

void push(Stack** stack,char data)
{
    if((*stack)->top==-1)
    {
        (*stack)->arr[++(*stack)->top]=data;
        return;
    }
    else if((*stack)->arr[(*stack)->top] == data)
    {
        pop(*stack);
        return;
    }
    else
    {
        (*stack)->arr[++(*stack)->top] = data;
        return;
    }
    return;
}

void printStack(Stack** stack)
{
    Stack* stack2 = *stack;
    char arr[100];
    int count=0;
    while(count<=(*stack)->top)
    {
            printf("%c",stack2->arr[count]);
            count++;
    }    
}

int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    Stack* stack = createStack(n);
    for(i=0;i<n;i++)
        push(&stack,s[i]);
    printStack(&stack);
    printf(" %d",stack->top+1);
    return 0;
}
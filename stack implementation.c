#include<stdio.h>
#define SIZE 4

int stack[SIZE];

int top=-1;

void push(int item)
{
    if ( top<SIZE-1)
    {
        top++;
        stack[top]=item;
        printf("\n %d is inserted",item);
    }

    else
    {
        printf("\n Stack is full . There is no space in the stack");
    }
}

int pop()
{
    if(top>=0)
    {
        int item=stack[top];
        top--;
        return item;
    }


    else
    {
        printf("\n stack is Empty");
        return -1;
    }
}



int peek()
{
    if(top>=0)
    {
        int item=stack[top];
        return item;
    }

    else
    {
        printf("\nEmpty Stack");
        return -1;
    }
}




int main()
{


    printf("\nThe top most element of the stack is %d",peek());

    printf("\n %d is removed",pop());


    push(5);
    push(10);
    push(15);
    push(20);
    push(25);

    printf("\nThe top most element of the stack is %d",peek());

    printf("\n %d is removed",pop());


    getch();
}


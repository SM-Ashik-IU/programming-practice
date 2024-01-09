#include<stdio.h>
#define size 4
int queue[size];

int front=0,rear=-1,total=0,frontItem;

void enqueue(int item)
{
    if(total==size)
    {
        printf("\n Queue is full. There is no space");

    }
    else
    {
        rear++;
       queue[rear]=item;
       total++;
       printf("\n %d is inserted",item);
    }
}

int dequeue()
{
    if(total==0)
    {
        printf("\n Queue is Empty");
        return -1;
    }
    else
    {
        frontItem=queue[front];
        queue[front]=-1;
        front++;
        total--;
        return frontItem;

    }
}

int main()
{
    printf("\n %d is removed",dequeue());
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    printf("\n %d is removed",dequeue());

}



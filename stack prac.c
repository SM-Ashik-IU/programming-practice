#include<stdio.h>
#define SIZE 4

int stack[SIZE];
int top=-1;

 void push(int item)
 {
     if(top<SIZE-1)
     {
         top++;
         stack[top]=item;
         printf("\n%d is inserted",item);

     }
     else
     {
         printf("\n Empty stack. There is no space in the stack");
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
         printf("\nStack is empty");
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
         printf("\nStack is empty");
         return -1;
     }
 }


int main()
{

       printf("\n The top most element of the stack is %d",peek());

    printf("\n %d is removed",pop());


    push(50);
    push(100);
    push(150);
    push(200);
    push(300);

    printf("\n The top most element of the stack is %d",peek());

    printf("\n %d is removed",pop());



    getch();
}

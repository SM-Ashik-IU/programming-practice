#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *Next;
};

 struct Node *createLinkedList(int a[],int size)
 {
    struct Node *head=NULL,*current=NULL,*temp=NULL;
    for(int i=0;i<size;i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=a[i];
        temp->Next=NULL;
         
         //for first node
        if(head=NULL)
        {
            head=temp;
            current=temp; //current=head;
        }

        //for all others node

        else
        {
           current->Next=temp;
           current=currrent->Next;   //current value update
        }
    }

    return head;
 }

 void printLinkedList(struct Node *head)
 {
    struct Node *current=head;

    while(current!=NULL)
    {
        printf("%d ->",current->data);
        current=current->Next;
    }

    printf("NULL");
 }

 int main()
{
    int arr1[]={12,134,15,51,70,40};
    int size=sizeof(arr1)/sizeof(arr1[0]);

    struct Node*head;
    head=createLinkedList(arr1,size);
    printLinkedList(head);
    //printf("Ashik");
}
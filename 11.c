#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int a[], int size)
{
    struct Node *head=NULL, *current=NULL, *temp=NULL;
    for(int i=0;i<size;i++)
    {
        temp=(struct Node*) malloc(sizeof(struct Node));
        temp->data=a[i];
        temp->next=NULL;
        //For first time
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
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
        current=current->next;
    }
    printf("NULL");
}

int main()
{
    int arr1[]={5,10,15,20,25,60};
    int size= sizeof(arr1) / sizeof(arr1[0]);

    struct Node *head;
    head=createLinkedList(arr1,size);
    printLinkedList(head);
    return 0;
}


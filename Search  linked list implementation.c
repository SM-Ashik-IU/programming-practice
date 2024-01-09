//Search  linked list implementation.c

#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
     int data;
     struct Node *next;
 } ;

 struct node *createLinkedList(int a[],int size)
 {
     struct Node *head=NULL , *current=NULL,  *temp=NULL;
     for(int i=0;i<size;i++)
     {
         temp=(struct Node*) malloc(sizeof(struct Node));

         temp->data=a[i];
         temp->next=NULL;
     if(head==NULL)
     {
         head=temp;
         current=head;
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
 void search(struct Node *current,int item)
 {
     int node=1;
     while(current!=NULL)
     {


     if(current->data==item)
     {
         printf("\n%d is found at node %d",item,node);
         return;
     }

     else
        {
         node++;
          current=current->next;
     }
 }



  printf("\n %d is not found in the linked list",item);
}
int main()
{
    int a1[]={10,20,30,40,50,1000};
    int size=sizeof(a1)/sizeof(a1[0]);
    struct Node *head;
    head=createLinkedList(a1,size);
    printLinkedList(head);
    search(head,30);
    return 0;

}

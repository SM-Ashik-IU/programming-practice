#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createlinkedlist(int a[], int size)
{
    struct node *head = NULL, *temp = NULL, *current = NULL;

    for (int i = 0; i < size; i++)
    {
        temp = (struct node *) malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

int main()
{
    int a[] = {52, 101, 310, 44, 12, 1};

    struct node *head = NULL;

    head = createlinkedlist(a, 6);

    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");

    return 0;
}

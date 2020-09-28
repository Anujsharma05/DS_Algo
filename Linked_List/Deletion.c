#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverseList(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    struct Node *q = p->next;
    p->next = q->next;
    free(q);

    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next= NULL;
    free(q);

    return head;
}

struct Node * deleteGivenValue(struct Node *head, int element) {

    struct Node *p = head;
    struct Node *q = head->next;

    while(q->data != element && q->next != NULL) {
       p = p->next;
       q = q->next;
    }

    if(q->data == element) {
         p->next = q->next;
         free(q);
    } else {
        printf("element not found\n");
    }
  
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 33;
    third->next = four;

    four->data = 55;
    four->next = NULL;

    int index = 2;
    int element = 255;
    // head = deleteAtFirst(head);
    // head = deleteAtIndex(head, index);
    // head = deleteAtEnd(head);
    // head = deleteGivenValue(head, element);

    traverseList(head);

    return 0;
}
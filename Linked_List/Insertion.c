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

struct Node *insertAtFirst(struct Node *ptr, int element)
{
    struct Node *newElement = (struct Node *)malloc(sizeof(struct Node));

    newElement->data = element;
    newElement->next = ptr;
    return newElement;
}

struct Node *insertAtIndex(struct Node *head, int element, int index)
{
    struct Node *newElement = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    newElement->data = element;
    newElement->next = p->next;
    p->next = newElement;

    return head;
}

struct Node *insertionAtEnd(struct Node *head, int element)
{

    struct Node *newElement = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = newElement;
    newElement->data = element;
    newElement->next = NULL;

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

    int element = 69;
    int index = 2;

    // head = insertAtFirst(head, element);
    // head = insertAtIndex(head, element, index);
    head = insertionAtEnd(head, element);

    traverseList(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtStart(struct Node *head, int element)
{

    struct Node *ptr = head;
    struct Node *newElement = (struct Node *)malloc(sizeof(struct Node));
    newElement->data = element;

    do
    {
        ptr = ptr->next;
    } while (ptr->next != head);

    newElement->next = head;
    ptr->next = newElement;

    return newElement;
}

void printLinkedList(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    int element = 69;

    head = insertAtStart(head, element);

    printLinkedList(head);

    return 0;
}
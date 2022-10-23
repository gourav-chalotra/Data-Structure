#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int item;
    struct Node *next;
};
// Insert at last
void insertAtlast(struct Node **s, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->item = data;
    ptr->next = NULL;
    if (*s == NULL)
    {
        *s = ptr;
    }
    else
    {
        struct Node *t = *s;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = ptr;
    }
}
// Deleting first node
void deleteFirst(struct Node **s)
{
    if (*s != NULL)
    {
        struct Node *t = *s;
        (*s) = (*s)->next;
        free(t);
    }
}
// printing each node
void viewList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->item);
        head = head->next;
    }
}
int main()
{
    // creating a pointer (start) to store the NULL address
    struct Node *start = NULL;
    // Inserting at last
    insertAtlast(&start, 2);
    insertAtlast(&start, 5);
    insertAtlast(&start, 1);
    insertAtlast(&start, 41);
    insertAtlast(&start, 35);
    insertAtlast(&start, 39);
    insertAtlast(&start, 45);
    // printing all list
    viewList(start);
    printf("\n");
    // Deleting Node form first
    deleteFirst(&start);
    printf("\n");
    // printing all list
    viewList(start);
    printf("\n");

    return 0;
}
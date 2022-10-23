#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct stack
{
    struct Node *top;
};
// void push(struct stack refStack, int data)
// {

// }
void push(struct stack &c, int data)
{
    struct Node *tempNode = (struct Node *)malloc(sizeof(struct Node));
    // first node creacting code
    if (c.top == NULL)
    {
        c.top = (struct Node *)malloc(sizeof(Node));
        c.top->data = data;
        c.top->next = NULL;
    }
    else if (!(tempNode == NULL))
    {

        tempNode->data = data;
        tempNode->next = c.top;
        c.top = tempNode;
    }
    else
    {
        printf("The stack is full!\n");
    }
}
void popInStack(struct stack &s1)
{
    if (s1.top == NULL)
    {
        printf("The stack is Underflow!\n");
    }
    else
    {
        struct stack *Free = (struct stack *)malloc(sizeof(stack));
        Free->top = s1.top;
        s1.top = s1.top->next;
        printf("The Pop element in the stack is: %d\n", Free->top->data);
        free(Free);
    }
}
void displayStackElements(struct stack s1)
{
    while (s1.top!= NULL)
    {
        printf("The elements in stack are: %d\n", s1.top->data);
        s1.top = s1.top->next;
    }
}
int main()
{
    struct stack s;
    s.top = NULL;
    // Pushing operation
    push(s, 50);
    push(s, 40);
    push(s, 30);
    push(s, 20);
    push(s, 10);
    printf("\n\nDisplaying elements\n");
    displayStackElements(s);
    printf("\n\nPOP elements:\n");
    popInStack(s);
    printf("\n\nDisplaying elements\n");
    displayStackElements(s);
    printf("\n");

    return 0;
}
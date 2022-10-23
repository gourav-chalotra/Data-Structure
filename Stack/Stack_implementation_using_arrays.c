// Implementing stack using arrays
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
// user defined datatype
typedef struct stack
{
    int top;
    int capacity;
    int *array;
} stack;

// Creating the stack
stack *createStack(int size_of_array)
{
    stack *s1 = (stack *)malloc(sizeof(stack));
    s1->top = -1;
    s1->capacity = size_of_array;
    s1->array = (int *)(malloc(sizeof(int) * s1->capacity));
    return s1;
}

// To chack the stack is Empty or not

int isEmpty(stack *s1)
{
    if (s1->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(stack *s1)
{
    if (s1->top == s1->capacity - 1)
    {
        return 1;
    }
    return 0;
}

// push in the stack
void StackPush(stack *s1, int data)
{
    if (!isFull(s1))
    {
        (s1)->top++;
        (s1)->array[(s1)->top] = data;
    }
    else
    {
        printf("\nStack is Full\n");
    }
}

void StackPop(stack *s1)
{
    if (!isEmpty(s1))
    {
        int t = s1->array[s1->top];
        s1->top--;
        printf("The pop value is: %d\n", t);
    }
    else
    {
        printf("\n\nBhi Kush backha he nhi tuna sab pop kr diya ha bhi.\n\n");
    }
}
void pintStack(stack *s1)
{
    if (!isEmpty(s1))
    {
        for (int i = 0; i <= s1->top; i++)
        {
            printf("The value is: %d\n", s1->array[i]);
        }
    }
    else
    {
        printf("Mara bhi tuna kush dala he nhi to print kya kru ga ma? ;( \n");
    }
}
int main()
{
    struct stack *s = NULL;
    s = createStack(5);
    // Pushing the stack values
    StackPush(s, 1);
    StackPush(s, 2);
    StackPush(s, 3);
    StackPush(s, 12);
    StackPush(s, 20);
    // Printng the stack
    pintStack(s);
    printf("\n");
    // Removing the elements from the stack
    StackPop(s);
    printf("\n");
    pintStack(s);
    printf("\n");
    StackPop(s);
    StackPop(s);
    StackPop(s);
    StackPop(s);

    StackPop(s);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int q1[100], q2[100], frount1, rear1, frount2, rear2;

void push(int data)
{
    if (frount2 && rear2 == 0)
    {
        q2[rear2] = data;
        rear2++;
    }
    else
    {
        q1[rear1] = data;
        while (frount2 < rear2)
        {
            rear1++;
            q1[rear1] = q2[frount2];
            frount2++;
        }
        frount2 = 0;
        rear2 = 0;
        while (frount1 <= rear1)
        {
            q2[rear2] = q1[frount1];
            frount1++;
            rear2++;
        }
        rear1 = 0;
        frount1 = 0;
    }
}
void display()
{
    int tempIndex = frount2;
    while (tempIndex < rear2)
    {
        printf("\nThe element is: %d", q2[tempIndex]);
        tempIndex++;
    }
}

void pop()
{
    if (rear2 == 0)
    {
        printf("The Stack is Emplty! Push the element first \n");
    }

    else
    {
        q1[0] = q2[frount2];
        printf("\nThe poped element is: %d", q1[0]);
        frount2++;
        while (frount2 < rear2)
        {
            q1[rear1] = q2[frount2];
            frount2++;
            rear1++;
        }
        frount2 = 0, rear2 = 0;
        while (frount1 < rear1)
        {
            q2[rear2] = q1[frount1];
            frount1++;
            rear2++;
        }
        frount1 = 0, rear1 = 0;
    }
}
int main()
{
    while (1)
    {
        printf("\n\n[1].Push\n[2].pop\n[3].Display\n[4].top\n[5].exit\n");
        int select;
        printf("\n\n\nEnter your choice: ");
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            int data;
            printf("\nEnter the element to push in stack: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
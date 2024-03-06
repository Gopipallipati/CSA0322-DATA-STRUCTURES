#include <stdio.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    int arr[MAX_SIZE];
};

void push(struct Stack *s, int element)
{
    if (s->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow: Cannot push element, the stack is full.\n");
    }
    else
    {
        s->arr[++(s->top)] = element;
    }
}

int pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow: Cannot pop element, the stack is empty.\n");
        return -1;
    }
    else
    {
        return s->arr[(s->top)--];
    }
}

void display(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = s->top; i >= 0; i--)
        {
            printf("%d\n", s->arr[i]);
        }
    }
}

int main()
{
    struct Stack s;
    s.top = -1;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);

    display(&s);

    pop(&s);
    pop(&s);

    display(&s);

    return 0;
}

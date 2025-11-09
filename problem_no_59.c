#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int isEmpty()
{
    return top == -1;
}

void insertBottom(int x)
{
    int temp;
    if (isEmpty())
    {
        push(x);
        return;
    }
    temp = pop();
    insertBottom(x);
    push(temp);
}

void reverse()
{
    int temp;
    if (isEmpty())
        return;
    temp = pop();
    reverse();
    insertBottom(temp);
}

int main()
{
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x);
    }

    reverse();

    printf("Reversed stack: ");
    while (!isEmpty())
        printf("%d ", pop());

    return 0;
}

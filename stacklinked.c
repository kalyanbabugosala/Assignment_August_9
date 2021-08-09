#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *top;

void initialize()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = (node*)malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}

int Peek()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

int main()
{
    initialize();
    push(1);
    push(2);
    push(3);
    printf("The top is %d\n",Peek());
    pop();
    printf("The top after pop is %d\n",Peek());
    display(top);
    return 0;
}
/*
The top is 3
The top after pop is 2
2
1
NULL

--------------------------------
Process exited after 0.05932 seconds with return value 0
Press any key to continue . . .
*/

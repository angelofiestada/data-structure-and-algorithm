#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void insertData(int number, int position)
{
    int i;
     Node *temp1 = new Node;
    temp1->data = number;
    temp1->next = head;
    if (position == 1)
    {
        head = temp1;
        return;
    }

    struct Node *temp2 = head;
    for (i = 0; i < position - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return;
}

void removeData(int position)
{

    int i;

    struct Node *temp1 = head;
    if (position == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }

    for (i = 0; i < position - 2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    return;
}

void print()
{
    printf("The List are:\n");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", (*temp).data);
        temp = (*temp).next;
    }
    printf("\n");
}
int main(void)
{

    head = NULL;

    insertData(90, 1);
    print();
    insertData(20, 2);
    print();
    insertData(40, 3);
    print();
    insertData(50, 2);
    print();
    removeData(1);
    print();
    removeData(3);
    print();
    removeData(2);
    print();

    return 0;
}
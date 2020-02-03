#include <stdio.h>
#include <stdlib.h>

struct TestNo
{
    struct TestCase *data;
    struct TestNo *next;
};

struct TestCase
{
    struct TestDef *data;
    struct Points *data;
    struct TestCase *next;
    
};

struct Points
{
    int a;
    int b;
    struct Points *next;
};

struct TestCaseDef
{
    int no;
    int euclidDis;
    int manhattanDis;
}

struct TestNo *head;
struct Points *next;

/**
 * Create the N number of Test case, serve
 * as the head of the linked list
*/
void insertTestNo(int x)
{
    TestNo *temp = new TestNo;
    TestCase *testcase = new TestCase;
    temp->data = addTestCase(TestCase &tescase);
    temp->next = head;
    head = temp;
}

void insertTestCase(int N, int x, int y)
{
    TestCase *temp = new TestCase;
    nextLink = temp;
    temp->x = x;
    temp->y = y;
    temp->next = NULL;
    nextLink = temp->next;
}

void printLinkeList()
{
    struct TestNo *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    insertTestNo(2);
    printLinkeList();
}
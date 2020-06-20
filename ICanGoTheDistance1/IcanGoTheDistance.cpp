#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LINESIZE 20

struct Input
{
    struct Input *next;
    int data;
};

struct Input *head;
struct Input *current;

void insert(int number)
{
    struct Input *temp = (Input *)malloc(sizeof(struct Input));
    if (head == NULL)
    {
        head = temp;
        current = temp;
    }
    else
    {
        (*current).next = temp;
        current = temp;
    }
    (*temp).data = number;
    (*temp).next = NULL;
}
void Print()
{
    struct Input *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", (*temp).data);
        temp = (*temp).next;
    }
}

void splitInput(char inputFile[])
{
    int counter = 0;
    FILE *input_File = fopen(inputFile, "r");
    char line[LINESIZE];

    while (!feof(input_File))
    {
        counter = counter + 1;
        printf("counter -> %d\n", counter);
        //Scan each line
        fgets(line, LINESIZE, input_File);
        printf("LINE\t%s\n", line);

        //Split the string
        char *token = strtok(line, " ");
        while (token != NULL)
        {
            int num = atoi(token);
            insert(num);
            token = strtok(NULL, " ");
        }
    }
}

int main()
{
    int counter;
    char inputFile[] = "testinput.txt";
    splitInput(inputFile);
    Print();

    return 0;
}

// solution is here
// https://stackoverflow.com/questions/51664980/dynamic-allocation-of-array-of-strings-fails-realloc-error
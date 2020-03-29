#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LINESIZE 50
struct Input {

};

int *splitInput(char inputFile[])
{
    FILE *input_File;
    int *inputArray;
    int *testInputPtr;
    int arraySize = NULL;
    char line[LINESIZE];

    input_File = fopen(inputFile, "r");
    inputArray = (int *)malloc(sizeof(int));

    while (!feof(input_File))
    {
        fgets(line, LINESIZE, input_File);
        char *token = strtok(line, " ");
        while (token != NULL)
        {
            arraySize++;
            int num = atoi(token);
            testInputPtr = (int *)realloc(inputArray, arraySize * sizeof(int));
            *(testInputPtr + arraySize) = num;

            token = strtok(NULL, " ");
        }
        printf("%s", line);
    }
    return inputArray;
}

int main()
{

    char inputFile[] = "testinput.txt";
    int loop = 0;

    // int input;
    int arraySize; //Dynamic ArraySize
    int *inputNum; //Array to hold all the input
    // input_File = fopen("testinput.txt", "r");

    // inputNum = (int*)malloc(1*sizeof(int));

    splitInput(inputFile);

    return 0;
}
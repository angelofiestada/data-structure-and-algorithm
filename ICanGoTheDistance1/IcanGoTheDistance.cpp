#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define LINESIZE 50

struct Input
{
    int *testInputPtr;
    int arraySize;
};

Input splitInput(char inputFile[])
{
    Input input;
    FILE *input_File = fopen(inputFile, "r");
    int *testInputPtr = (int *)malloc(0);
    // int *testInputPtr;
    // int arraySize = NULL;
    char line[LINESIZE];
    input.arraySize = 1;

    // input_File = fopen(inputFile, "r");
    // inputArray = (int *)malloc(sizeof(int));

    while (!feof(input_File))
    {
        fgets(line, LINESIZE, input_File);
        printf("TIS IS INE\t");
        printf("%s\t", line);
        char *token = strtok(line, " ");
        while (token != NULL)
        {
            printf("token%s\t", token);
            input.arraySize++;
            printf("array Size is %d\n", input.arraySize);
            int num = atoi(token);
            printf("num%d\t", num);
            input.testInputPtr = (int *)realloc(testInputPtr, input.arraySize * sizeof(int));
            if(input.testInputPtr) {
            *(input.testInputPtr + input.arraySize) = num;
            } else {
                printf("ERROOOOOOOOO");
            }



            printf("->%d\t\n", *(input.testInputPtr + input.arraySize));

            token = strtok(NULL, " ");
        }
           printf("token after %s\t", token);
    }
    // return input;
}

int main()
{
    int counter;
    char inputFile[] = "testinput.txt";
    Input input = splitInput(inputFile);
    // int loop = 0;

    // int input;
    // int arraySize; //Dynamic ArraySize
    // int *inputNum; //Array to hold all the input
    // input_File = fopen("testinput.txt", "r");

    // inputNum = (int*)malloc(1*sizeof(int));

    // for (counter = 0; counter < input.arraySize; counter++)
    // {
    //     printf("%d ", *(input.testInputPtr + counter));
    // }
    return 0;
}

solution is here 
https://stackoverflow.com/questions/51664980/dynamic-allocation-of-array-of-strings-fails-realloc-error
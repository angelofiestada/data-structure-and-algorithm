#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{

    FILE *input_File;
    char ch, buffer[3];
    int loop=0;
    char *chptr;
    int input;
    int arraySize; //Dynamic ArraySize
    int *inputNum; //Array to hold all the input
    input_File = fopen("testinput.txt", "r");

    // inputNum = (int*)malloc(1*sizeof(int));
    printf("FUCK YOY HABOKLO");
    while (!feof(input_File))
    
        ch = fgetc(input_File);
        // chptr = ch;
        while( ch!='\n') {
            // printf("SF\n");
        buffer[loop++] = ch;
        ch = fgetc(input_File);
            if(isdigit(ch)) {
                arraySize++;
                printf("%d", arraySize);
                inputNum = (int*)realloc(inputNum, arraySize*sizeof(int));
                int input = int(ch);
                // inputNum[arraySize] = input;
            
        // input=scanf(ch, "%d", input);
        }
    }
        printf("%c", ch);
    printf("ITS ME MOTHFUCK");
    for(int i = 0; i < arraySize; i++ ) {
        
        printf("%d\n", inputNum[i]);
    }
    return 0;
}
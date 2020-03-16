#include <conio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    FILE *input_File;
    char ch;
    input_File = fopen("testinput.txt", "r");
    int a[6] = {1, 2, 3, 4, 5};
    int *pointer = a;
    printf("%d \n\n", pointer[1]);
    while (!feof(input_File))
    {
        ch = fgetc(input_File);
        printf("%c", ch);
        printf("%d",strlen(ch));
    }
    return 0;
}
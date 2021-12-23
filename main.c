#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("\t\t\t\tWelcome to ASCII Code Generator\n\n");

    char ch;
    printf("\tEnter your Alphabet = ");
    scanf("%c", &ch);
    printf("\n\tASCII Code is = %d", ch);
    getch();
    return 0;
}

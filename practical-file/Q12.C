#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    int i, length = 0;

    clrscr();

    printf("Enter a string: "); gets(str);

    for (i = 0; str[i] != '\0'; i++) length++;
    printf("Length of the string is: %d.", length);

    getch();
}


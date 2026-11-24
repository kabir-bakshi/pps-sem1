#include <stdio.h>
#include <conio.h>

void main() {
    int num;
    clrscr();
    printf("Enter an integer: "); scanf("%d", &num);

    if ( num % 2 == 0 ) printf("The given number is Even.");
    else printf("The given number is Odd.");

    getch();
}
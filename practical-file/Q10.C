#include <stdio.h>
#include <conio.h>


void main() {
    int num, i;
    clrscr();

    for (i = 0; i < 3; i++) {
	printf("Enter an integer: "); scanf("%d", &num);

	printf("The number you entered is ");
	if (num < 0) printf("negative.");
	else if (num > 0) printf("positive.");
	else printf("Zero.");
	printf("\n");
    }

    getch();
}
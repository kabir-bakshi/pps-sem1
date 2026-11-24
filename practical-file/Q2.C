#include <stdio.h>
#include <conio.h>

int max(int a, int b) {
    return a >= b ? a : b;
}

void main() {
    int a, b, c;
    clrscr();

    printf("Enter the value of A: "); scanf("%d", &a);
    printf("Enter the value of B: "); scanf("%d", &b);
    printf("Enter the value of C: "); scanf("%d", &c);

    printf("The greatest of these three numbers is %d.", max(max(a, b), c));

    getch();
}
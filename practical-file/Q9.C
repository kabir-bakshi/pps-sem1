#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int a = 12, b = 9;
    clrscr();

    printf("Before swapping, A = %d,  B = %d.\n");
    swap(&a, &b);
    printf("After swapping,  A = %d, B = %d.");

    getch();
}
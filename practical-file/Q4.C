#include <stdio.h>
#include <conio.h>

long long unsigned factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}
void main() {
    int num;
    clrscr();

    printf("Enter a natural number: "); scanf("%d", &num);
    printf("The factorial of %d is %llu.", num, factorial(num));

    getch();
}
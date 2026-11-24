#include <stdio.h>
#include <conio.h>


void main() {
    int n = 0, i = 0, num[100], total = 0;
    clrscr();

    printf("How long is the array going to be?\n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
	printf("Enter value no. %d: ", i + 1); scanf("%d", &num[i]);
	total += num[i];
    }
    printf("The total of all the numbers entered is %d.", total);


    getch();
}
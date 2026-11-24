#include <stdio.h>
#include <conio.h>

void main() {
    int subjects[5], i = 0, total = 0;
    float percentage;
    clrscr();

    for(i = 0; i < 5; i++) {
	printf("Enter marks for subject no. %d: ", i + 1);
	scanf("%d", &subjects[i]);
	total = total + subjects[i];
	printf("total is equal to %d.\n", total);
    }
    percentage = (float) total / 5;
    printf("Total marks are: %d\n", total);
    printf("Your total percentage is: %.2f", percentage);

    getch();
}
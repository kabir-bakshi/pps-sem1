#include <stdio.h>
#include <conio.h>


void main() {
    int n = 0, i, nums[100], query;
    clrscr();

    printf("How long is the array going to be?\n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
	printf("Enter value no. %d: ", i + 1); scanf("%d", &nums[i]);
    }

    printf("\nWhich element would you like to search?\n: ");
    scanf("%d", &query);

    for (i = 0; i < n; i++) {
	if (query == nums[i]) {
	    printf("The index of the required element is %d.", i);
	} else if (i == n) {
	    printf("The element was not found in the array.");
	}
    }

    getch();
}
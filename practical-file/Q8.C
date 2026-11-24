#include <stdio.h>
#include <conio.h>


void main() {
    int n = 0, nums[100], i, j, temp;
    clrscr();

    printf("How long is the array going to be?\n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
	printf("Enter value no. %d: ", i + 1); scanf("%d", &nums[i]);
    }

    for (i = 0; i < n - 1; i++ ) {
	for (j = 0; j < n - i - 1; j++) {
	    if (nums[j + 1] < nums[j]) {
		temp = nums[j];
		nums[j] = nums[j + 1];
		nums[j + 1] = temp;
	    }
	}
    }

    printf("\nHere's the array sorted in ascending order :-\n{ ");
    for (i = 0; i < n; i++) {
	printf("%d", nums[i]); if (i != n - 1) printf(", ");
    }
    printf(" }");

    getch();
}
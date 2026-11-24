#include <stdio.h>
#include <conio.h>


void main() {
    int n = 0, i = 0, nums[100], max, min;
    clrscr();

    printf("How long is the array going to be?\n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
	printf("Enter value no. %d: ", i + 1); scanf("%d", &nums[i]);
	if (i == 0) {
	    max = nums[i];
	    min = nums[i];
	    continue;
	}

	if(nums[i] > max) max = nums[i];
	if(nums[i] < min) min = nums[i];
    }
    printf("\nThe maximum and minimum values are %d and %d respectfully.", max, min);

    getch();
}

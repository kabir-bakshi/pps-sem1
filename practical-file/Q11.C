#include <stdio.h>
#include <conio.h>


void main() {
    int n = 0, i = 0, nums[100], largest;
    clrscr();

    printf("How long is the array going to be?\n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
	printf("Enter value no. %d: ", i + 1); scanf("%d", &nums[i]);
	if (i == 0) {
	    largest = nums[i];
	    continue;
	} else if(nums[i] > largest) largest = nums[i];
    }
    printf("\nThe largest element from the array is %d.", largest);

    getch();
}
#include <stdio.h>

int main() {
    int x, y;

    // Ask user for input x
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);

	// Ask user for input y
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    // Determine the quadrant using nested if-else statements
    if (x == 0 || y == 0) {
        printf("Your point is at the axis.\n");
    } else {
        if (x > 0) {
            if (y > 0) {
                printf("The point is in Quadrant I.\n");
            } else {
                printf("The point is in Quadrant IV.\n");
            }
        } else {
            if (y > 0) {
                printf("The point is in Quadrant II.\n");
            } else {
                printf("The point is in Quadrant III.\n");
            }
        }
    }

    return 0;
}
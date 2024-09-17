#include <stdio.h>

int main() {
    int x, y;

    // Ask user for input
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);

    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    // Determine the quadrant using nested if-else statements
    if (x == 0 && y == 0) {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) is on the y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%d, %d) is on the x-axis.\n", x, y);
    } else {
        if (x > 0) {
            if (y > 0) {
                printf("The point (%d, %d) is in Quadrant I.\n", x, y);
            } else {
                printf("The point (%d, %d) is in Quadrant IV.\n", x, y);
            }
        } else {
            if (y > 0) {
                printf("The point (%d, %d) is in Quadrant II.\n", x, y);
            } else {
                printf("The point (%d, %d) is in Quadrant III.\n", x, y);
            }
        }
    }

    return 0;
}
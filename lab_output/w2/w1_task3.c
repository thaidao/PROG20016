#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the coordinates of the two points
    float x1, y1, x2, y2, distance;

    // Input values for point 1 (x1, y1)
    printf("Enter the x-coordinate of the first point: ");
    scanf("%f", &x1);
    printf("Enter the y-coordinate of the first point: ");
    scanf("%f", &y1);

    // Input values for point 2 (x2, y2)
    printf("Enter the x-coordinate of the second point: ");
    scanf("%f", &x2);
    printf("Enter the y-coordinate of the second point: ");
    scanf("%f", &y2);

    // Calculate the distance between the two points using the formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the calculated distance
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}

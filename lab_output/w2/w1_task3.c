#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the coordinates of the two points
    float fP1_x, fP1_y, fP2_x, fP2_y, distance;

    // Input values for point 1 (fP1_x, fP1_y)
    printf("Enter the x-coordinate of the P1: ");
    scanf("%f", &fP1_x);
    printf("Enter the y-coordinate of the P1: ");
    scanf("%f", &fP1_y);

    // Input values for point 2 (fP2_x, fP2_y)
    printf("Enter the x-coordinate of the P2: ");
    scanf("%f", &fP2_x);
    printf("Enter the y-coordinate of the P2: ");
    scanf("%f", &fP2_y);

    // Calculate the distance between the two points using the formula
    distance = sqrt(pow(fP2_x - fP1_x, 2) + pow(fP2_y - fP1_y, 2));

    // Print the calculated distance
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}

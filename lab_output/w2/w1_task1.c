#include <stdio.h>

int main() {
    // Declare variables for height and width
    float height, width, area;

    // Ask the user to input the height
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    // Ask the user to input the width
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = height * width;

    // Print the area of the rectangle
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}

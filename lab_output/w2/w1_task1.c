#include <stdio.h>

int main() {
    // Declare variables for height and width
    float fHeight, fWidth;

    // Ask the user to input the Height
    printf("Enter the height of the rectangle: ");
    scanf("%f", &fHeight);

    // Ask the user to input the Width
    printf("Enter the width of the rectangle: ");
    scanf("%f", &fWidth);

    // Print the area of the rectangle
    printf("The area of the rectangle is: %.2f\n", fHeight * fWidth);

    return 0;
}

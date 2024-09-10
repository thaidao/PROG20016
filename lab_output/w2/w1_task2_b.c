#include <stdio.h>

int main() {
    // Declare variables for temperature values
    float celsius, fahrenheit;

    // Input Celsius temperature from the user
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    // Input Fahrenheit temperature from the user
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius: %.2f\n", celsius);

    // Prove that -40°C = -40°F
    printf("\nProving that -40°C = -40°F\n");
    celsius = -40;
    fahrenheit = (celsius * 1.8) + 32;
    printf("-40°C in Fahrenheit is: %.2f°F\n", fahrenheit);

    fahrenheit = -40;
    celsius = (fahrenheit - 32) / 1.8;
    printf("-40°F in Celsius is: %.2f°C\n", celsius);

    return 0;
}

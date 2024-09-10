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

    return 0;
}

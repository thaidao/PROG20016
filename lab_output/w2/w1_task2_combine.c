#include <stdio.h>

int main() {
    // Declare variables for temperature values
    float fCel, fFah;

    printf("Part a: Convert temperature\n");
    // Input celsius temperature from the user
    printf("Enter the temperature in celsius: ");
    scanf("%f", &fCel);

    // Convert celsius to fahrenheit
    fFah = (fCel * 1.8) + 32;
    printf("Temperature in fFah: %.2f\n", fFah);

    // Input fahrenheit temperature from the user
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fFah);

    // Convert fahrenheit to celsius
    fCel = (fFah - 32) / 1.8;
    printf("Temperature in celsius: %.2f\n", fCel);
	
	// Prove that -40°C = -40°F
    printf("\nPart b: Proving that -40°C = -40°F\n");
    fCel = -40;
    fFah = (fCel * 1.8) + 32;
    printf("-40°C in fahrenheit is: %.2f°F\n", fFah);

    fFah = -40;
    fCel = (fFah - 32) / 1.8;
    printf("-40°F in celsius is: %.2f°C\n", fCel);

    return 0;
}

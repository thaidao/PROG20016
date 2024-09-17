#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char operation;

    printf("Simple Calculator\n");

    // Get user input
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);  // Note the space before %c to consume any whitespace

    // Perform calculation using switch
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation. Please use +, -, *, or /.\n");
            return 1;
    }

    // Display the result
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operation, num2, result);

    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation;

    printf("My Calculator\n");

    // Get user input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

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
            printf("Invalid operation.\n");
            return 1;
    }

    // Display the result
    printf("Result: %d %c %d = %d\n", num1, operation, num2, result);

    return 0;
}
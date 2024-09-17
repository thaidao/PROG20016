#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
    char status;
    int salary;

    // Constants for salaries
    const int SENIOR_SALARY = 400;
    const int JUNIOR_SALARY = 275;

    // Prompt user for input
    printf("Enter salesperson's status (s for senior, j for junior): ");
    scanf(" %c", &status); // Note the space before %c to consume any whitespace

    // Convert input to lowercase for case-insensitive comparison
    status = tolower(status);

    // Determine salary based on status
    if (status == 's') {
        salary = SENIOR_SALARY;
        printf("Senior salesperson's salary: $%d per week\n", salary);
    } else if (status == 'j') {
        salary = JUNIOR_SALARY;
        printf("Junior salesperson's salary: $%d per week\n", salary);
    } else {
        printf("Invalid status entered. Please enter 's' for senior or 'j' for junior.\n");
        return 1; // Exit with an error code
    }

    return 0;
}
#include <stdio.h>

int main() {
    char status;

    // Ask status
    printf("Enter salesperson's status (s/j): ");
    scanf(" %c", &status);

    // Determine salary based on status
    if (status == 's') {
        printf("Senior salesperson's salary: 400 per week\n");
    } 
    else if (status == 'j') 
    {
        printf("Junior salesperson's salary: 275 per week\n");
    }
    else 
    {
        printf("Invalid status.\n");
        return 1;
    }

    return 0;
}
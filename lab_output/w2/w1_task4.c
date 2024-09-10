#include <stdio.h>

int main() {
    // Declare variables for marks of each subject and the percentage
    float subject1, subject2, subject3, subject4, subject5, totalMarks, percentage;

    // Ask the user to input marks for five subjects
    printf("Enter the marks obtained in subject 1 (out of 100): ");
    scanf("%f", &subject1);

    printf("Enter the marks obtained in subject 2 (out of 100): ");
    scanf("%f", &subject2);

    printf("Enter the marks obtained in subject 3 (out of 100): ");
    scanf("%f", &subject3);

    printf("Enter the marks obtained in subject 4 (out of 100): ");
    scanf("%f", &subject4);

    printf("Enter the marks obtained in subject 5 (out of 100): ");
    scanf("%f", &subject5);

    // Calculate total marks obtained
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage (total marks / 500 * 100)
    percentage = (totalMarks / 500) * 100;

    // Print the calculated percentage
    printf("The percentage obtained is: %.2f%%\n", percentage);

    return 0;
}

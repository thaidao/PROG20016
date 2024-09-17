#include <stdio.h>

int main() {
    // Declare variables
    float fSub1, fSub2, fSub3, fSub4, fSub5;
	float fTotalMarks, fPercentage;

    // Ask the user to input marks for five fSubs
    printf("Enter mark of subject 1 (out of 100): ");
    scanf("%f", &fSub1);

    printf("Enter mark of subject 2 (out of 100): ");
    scanf("%f", &fSub2);

    printf("Enter mark of subject 3 (out of 100): ");
    scanf("%f", &fSub3);

    printf("Enter mark of subject 4 (out of 100): ");
    scanf("%f", &fSub4);

    printf("Enter mark of subject 5 (out of 100): ");
    scanf("%f", &fSub5);

    // Calculate total marks obtained
    fTotalMarks = fSub1 + fSub2 + fSub3 + fSub4 + fSub5;

    // Calculate percentage (total marks / 500 * 100)
    fPercentage = (fTotalMarks / 500) * 100;

    // Print the calculated percentage
    printf("The percentage obtained is: %.2f%%\n", fPercentage);

    return 0;
}

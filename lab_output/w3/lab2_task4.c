#include <stdio.h>

int main() {
    int hoursWorked;
    float salary;
    const float REGULAR_RATE = 8.00;
    const float OVERTIME_RATE = 12.00;
    const int REGULAR_HOURS = 40;
    const float BASE_SALARY = 320.00;

    // Request hours worked as input
    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hoursWorked);

    // Compute salary based on hours worked
    if (hoursWorked <= REGULAR_HOURS) {
        salary = hoursWorked * REGULAR_RATE;
    } else {
        int overtimeHours = hoursWorked - REGULAR_HOURS;
        salary = BASE_SALARY + (overtimeHours * OVERTIME_RATE);
    }

    // Display the salary as output
    printf("Weekly Salary: $%.2f\n", salary);

    return 0;
}
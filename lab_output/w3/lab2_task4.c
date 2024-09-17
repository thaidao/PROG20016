#include <stdio.h>

int main() {
    int hoursWorked;
	int overtimeHours;
    float salary;

    // Ask hours worked
    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hoursWorked);

    // Compute salary based on hours worked
    if (hoursWorked <= 40) 
	{
        salary = hoursWorked * 8;
    }
	else
	{
		//Calculate an overtime hours
        overtimeHours = hoursWorked - 40;
        salary = 320 + (overtimeHours * 12);
    }

    // Display the salary
    printf("Weekly Salary: $%f\n", salary);

    return 0;
}
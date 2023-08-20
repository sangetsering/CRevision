//program to validate the entered date

#include <stdio.h>

//structure defination
typedef struct
 {
    int day;
    int month;
    int year;
} Date;

// Function to read data into structure members
void readDate(Date *d)
 {
    printf("Enter day: ");
    scanf("%d", &d->day);
    printf("Enter month (as a number 1-12): ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);
}

// Function to validate the date entered
int validateDate(Date d) 
{
    // Check month validity
    if (d.month < 1 || d.month > 12) 
	{
        return 0;
    }
    
    // Days in February (taking leap year into consideration)
    int daysInFeb = (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) ? 29 : 28;

    // Array to hold number of days in each month
    int daysInMonth[] = {0, 31, daysInFeb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check day validity
    if (d.day < 1 || d.day > daysInMonth[d.month]) 
	{
        return 0;
    }

    return 1;
}

// Function to print the date in the specified format
void printDate(Date d) 
{
    char *months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s, %d, %d\n", months[d.month], d.day, d.year);
}

int main() 
{
    Date date;
    readDate(&date);

    if (validateDate(date)) 
	{
        printDate(date);
    } 
	else 
	{
        printf("Invalid date entered!\n");
    }

    return 0;
}

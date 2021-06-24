#include <stdio.h>
#include "holberton.h"

/**
 * main - takes a date and prints how many are left in the year, taking
 * leap years int account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 16;
	year 1996;

	printf("Date: %02d/%02d/%04\n", month, day, year);

	day = convert_day(month, day);

	printf_remaining_days(month, day, year);

	return (0);
}


#include "main.h"

#include <stdio.h>

/**
 * prints_times_table - prints the n times table, starting with 0
 * @n: The number to be treated
 * Return: value of the times table
 */

void print_Times_Table(int n, int limit)
	{
   	 for (int i = 0; i <= limit; i++) 
   	 {
        printf("%d x %d = %d\n", i, n, i * n);
   	 }
	}

	int main() 
	{
	int number, limit;

       	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Enter the limit: ");
	scanf("%d", &limit);

	printf("Times table for %d:\n", number);
	printTimesTable(number, limit);
	
       	return 0;
	}

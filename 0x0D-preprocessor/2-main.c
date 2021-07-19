/*
* 2-main.c - prints the name of the file it was compiled from
* Author: Rodrigo Zárate Algecira
* Date: 19, July 2021
*/

#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from
 *
 * Return:void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}

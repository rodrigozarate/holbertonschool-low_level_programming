/*
 * Function: main
 * --------------
 * show the size in bytes of char, int, long, double, and float types
 * no parameters
 * returns 0
 * 17/06/2021
 * Rodrigo Zárate Algecira
 */

#include<stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void) {
	char charType;	
	int intType;
	long longType;
	double doubleType;
	float floatType;

	printf("Size of a char: %zu byte\(s\)\n", sizeof(charType));
	printf("Size of an int: %zu byte\(s\)\n", sizeof(intType));
	printf("Size of a long int: %zu byte\(s\)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte\(s\)\n", sizeof(doubleType));
	printf("Size of a float: %zu byte\(s\)\n", sizeof(floatType));

	return 0;
}

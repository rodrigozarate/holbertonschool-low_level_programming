/*
 * Function main
 * what function does;
 * what its parameter values are
 * what values it returns
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
	printf("Size of long int: %zu byte\(s\)\n", sizeof(longType));
	printf("Size of long long int: %zu byte\(s\)\n", sizeof(doubleType));
	printf("Size of a float: %zu byte\(s\)\n", sizeof(floatType));

	return 0;
}

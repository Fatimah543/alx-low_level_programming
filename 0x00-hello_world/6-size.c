#!/bin/bash
#include<stdio.h>
int main() {
	int intType;
	float floatType;
	double doubleType;

	// sizeof evaluates the size of a variable
	printf("size of int: %zu bits\n", sizeof(intType));
	printf("size of float: %zu bits\n", sizeof(floatType));
	printf("size of double: %zu bits\n", sizeof(doubleType));

	return 0;
}

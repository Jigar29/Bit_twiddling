/*
 ============================================================================
 Name        : Bit_twiddling.c
 Author      : Jigar Agrawal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "methods.h"
#include "popular_questions.h"

int main(void)
{
	int x = 0x11001000;
	swapNibble(x);
	countOnesInNum(x);
	reverseBits(x);
	swapHalfWord(x);
	upperWordBitsSwap(x);

	getTheSignOfTheNumber(-1);
	isSameSign(1, -3);

	int a = -5;

	printf("%x\n", a);
	isPowerOf2(6);
	return 0;
}

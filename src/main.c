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
#include <tricks.h>

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

	int num = 0b1001010;
	printf("The number after setting the given bit number is = 0x%x\n", setBitNumber(num, 1));
	printf("The number after clearing the given bit number is = 0x%x\n", clearBitNumber(num, 4));
	printf("The number after toggling the given bit number is = 0x%x\n", toggleBitNumber(num, 2));
	printf("The bit at the given position is currently = %d\n", readBitNumber(num, 3));
	printf("Number of ones in the given number are = %d\n", countNumberOfOnes(num));

	if(isOdd(-1))
	{
		printf("Given number is odd\n");
	}
	else
	{
		printf("Given number is even\n");
	}

	int num1 =7, num2= -2;
	swapNubers(&num1, &num2);
	printf("Swapped Numbers are\nNum1 = %d\nNum2 = %d\n",num1,num2);
	return 0;
}

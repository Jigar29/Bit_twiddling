/*
 * methods.c
 *
 *  Created on: Nov 4, 2018
 *  Author: jigaragrawal
 */

#include "methods.h"
#include <stdbool.h>

int getTheSignOfTheNumber(int num)
{
	int sign = 0;

	if(!num)
		return 0;

	sign = ((unsigned int)num)>>(sizeof(int)*8 - 1);    // Shifting the MSB to LSB

	printf("Sign of the num is %d\n", sign);
	return sign;
}

bool isSameSign(int num1, int num2)
{
	bool result = ((num1^num2)>0);

	if(!result)
		printf("The signs are different\n");
	else
		printf("The signs are same\n");

	return result;
}

bool isPowerOf2(int num)
{
	bool result = 0;

	result = num && !(num & (num-1));

	// Number which are power of 2 have only one of the 2^n bit set
	// When we subtract them by 1 and make them and with original number
	// it will make all the bits zero because rest of the bits in the original number were zero
	// making the logic in the case right and it will give us the true result

	if(result)
	{
		printf("The number is Power of 2\n");
	}
	else
	{
		printf("The number is not power of 2\n");
	}

	return result;
}

int getAbs(int num)
{
	int result = 0;

	return result;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

void swapNibble(uint8_t num)
{
	uint8_t temp = num & (0x0f);

	printf("******Nibble Swapping******\n");
	printf("Original : %x\n", num);

	temp = temp<<4;

	num = num>>4;
	num = num | temp;

	printf("Swapped  : %2x\n\n", num);

}

void upperWordBitsSwap(unsigned int num)
{
	int limit = sizeof(num)*4;

	printf("Upper Byte Bits Swap\n\n");
	printf("Original = %x\n", num);
	unsigned int mask = (unsigned int)(-1)<<(limit);
	unsigned int temp = (unsigned int)(num & mask)>>(limit);
	unsigned int temp2 = 0;

	num = (num & (~mask));

	for(int i= 0; i<limit-1; i++)
	{
		temp2 |= (temp & 0x01);
		temp2<<=1;
		temp>>=1;
	}
	temp2 |= temp;

	temp2<<=limit;

	num |= temp2;

	printf("Upper Swapped = %x\n", num);
}

void countOnesInNum(unsigned int num)
{
	int counter= 0;

	printf("*****Count Ones in the number*****\n");

	for(counter = 0; num != 0; counter++)
	{
		num = num & (num -1);
	}
	printf("Number of Ones in Number is : %d\n\n", counter);
}

void reverseBits(unsigned int num)
{
	int limit = sizeof(num)*8;

	printf("****Reversing the Bits of the number*****\n");
	printf("Originial Number = %x\n", num);
	unsigned int out = 0;

	for(int i=0; i<limit-1; i++)
	{
		out = out | (num & 0x01);
		out = out<<1;
		num = num >>1;
	}
	out = out| num;

	printf("Reversed Number is %8x\n\n", out);
}

void swapHalfWord(unsigned int num)
{
	int limit = sizeof(num)*4;

	printf("Swap the half word\n");
	printf("Original Number = %x\n", num);
	unsigned int mask = (unsigned int)(-1)>>limit;
	unsigned int temp = num & mask;
	temp = temp<<limit;
	num = num>>limit;
	num |= temp;

	printf("Swapped HalfWord = %x\n\n", num);
}

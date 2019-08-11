/*
 * methods.h
 *
 *  Created on: Nov 4, 2018
 *      Author: jigaragrawal
 */

#ifndef METHODS_H_
#define METHODS_H_

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

int setBitNumber(int num, int bit_no);
int clearBitNumber(int num, int bit_no);
int toggleBitNumber(int num, int bit_no);
bool readBitNumber(int num, int bit_no);
bool isOdd(int num);
void swapNubers(int *a, int *b);
int getTheSignOfTheNumber(int num);
bool isSameSign(int num1, int num2);
int getAbs(int num);
int countNumberOfOnes(int num);
bool isPowerOf2(int num);

#endif /* METHODS_H_ */

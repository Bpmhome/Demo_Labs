//Kurtis Mclain
//Gets the Hypontenuse of a triangle
//02-05-2019
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main()
{
    uint32_t inputNumber = 0;
	uint32_t transitionNumber = 0;
	printf("Input a positive number:  ");
	scanf("%u", &inputNumber);

	printf("Your number was %u (Hex: 0x%08X) \n", inputNumber, inputNumber);

		printf("Solution #1: \n");
		printf("\tA. Copy the original value to a temp. \n");
		transitionNumber = inputNumber;

		printf("\tB. Bit shift the original right by four. \n");
		inputNumber = inputNumber >> 4;

		printf("\tC. Bit shift the copy left by 32 - 4 = 28. \n");
		transitionNumber = transitionNumber << ((sizeof(transitionNumber) * 8) - 4);

		printf("\tD. OR the bit shifted original and the bit shifted copy. \n");
		inputNumber = inputNumber | transitionNumber;

		printf("\tE. Profit. \n");
}
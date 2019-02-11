//Kurtis Mclain
//Converts to binary
//02-05-2019
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80000000 ? '1' : '0'), \
  (byte & 0x40000000 ? '1' : '0'), \
  (byte & 0x20000000 ? '1' : '0'), \
  (byte & 0x10000000 ? '1' : '0'), \
  (byte & 0x8000000 ? '1' : '0'), \
  (byte & 0x4000000 ? '1' : '0'), \
  (byte & 0x2000000 ? '1' : '0'), \
  (byte & 0x1000000 ? '1' : '0')  \
  (byte & 0x800000 ? '1' : '0'), \
  (byte & 0x400000 ? '1' : '0'), \
  (byte & 0x200000 ? '1' : '0'), \
  (byte & 0x100000 ? '1' : '0'), \
  (byte & 0x80000 ? '1' : '0'), \
  (byte & 0x40000 ? '1' : '0'), \
  (byte & 0x20000 ? '1' : '0'), \
  (byte & 0x10000 ? '1' : '0')  \
  (byte & 0x8000 ? '1' : '0'), \
  (byte & 0x4000 ? '1' : '0'), \
  (byte & 0x2000 ? '1' : '0'), \
  (byte & 0x1000 ? '1' : '0'), \
  (byte & 0x800 ? '1' : '0'), \
  (byte & 0x400 ? '1' : '0'), \
  (byte & 0x200 ? '1' : '0'), \
  (byte & 0x100 ? '1' : '0')  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main()
{
    uint32_t UserInput = 0;
    uint32_t bitChecker = 1;
    printf("Please enter a number: ");
    fscanf(stdin, "%u", &UserInput);
    bitChecker = UserInput & bitChecker << 31;
    printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(bitChecker));
   return 0;
}
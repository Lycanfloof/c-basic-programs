#include <stdio.h>

// These are bitwise operations. They are used to operate binary numbers and get various outputs.
// They compare each bit of 2 binary numbers. That means they'll operate the 1st bit of both numbers, then the 2nd bit of both and so on.

void main(void)
{
    int a = 15;
    int b = 3;

    // This is the OR operator. It returns 1 when one or both bits are 1.
    // In this case it returns the highest value of the two (15 or 00001111).
    printf("%u\n", a | b);

    // This is the AND operator. It returns 1 when both bits are 1.
    // In this case it returns the lowest number of the two (3 or 00000011).
    printf("%u\n", a & b);

    // This is the XOR operator, also called exclusive OR. It returns 1 when two bits are different from each other.
    // In this case it returns the absolute value of the difference between two numbers (12 or 00001100).
    printf("%u\n", a ^ b);

    // This is the NOT operator. It returns the complement of a number.
    // If we had just one byte of memory, then it'd return 11110000.
    printf("%u\n", ~a);

    // This is the right shift operator. It divides the number by 2^n. In this case n = 1.
    printf("%u\n", a >> 1);

    // This is the left shift operator. It multiplies the number by 2^n. In this case n = 1.
    printf("%u\n", a << 1);
}
#include <stdio.h>

/*
 * define setbits(x, p, n, y);
 *
 * returns x with the n bits that begin at position p set to the rightmost n
 * bits of y, leaving the other bits unchanged.
 *
 * © Enzo Barrett 2019
 *
 */

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
    printf("%u", setbits(152, 4, 3, 229));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned xMask = ~((~0 << (p+1)) ^ (~0 << (p+1-n)));
    unsigned yMask = ~(~0 << n);
    unsigned xComb = x & xMask;
    unsigned yComb = y & yMask;
    yComb <<= p + 1 - n;
    return xComb | yComb;
}

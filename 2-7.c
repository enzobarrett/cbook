#include <stdio.h>

/*
 * define invert(x,p,n)
 *
 * returns x with the n bits that begin at position p inverted, leaving the
 * others unchanged.
 *
 * © Enzo Barrett 2019
 *
 */

unsigned invert(unsigned x, int p, int n);

main()
{
    printf("%u\n", invert(170, 4, 3));
}

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((~0 << (p+1)) ^ (~0 << (p+1-n)));
    return x ^ mask;
}

#include <stdio.h>

/*
 * define rightrot(x, n);
 *
 * Returns the value of the int x rotated to the right n positions
 *
 * © Enzo Barrett 2019
 *
 */

int countbits(unsigned n);
unsigned rightrot(unsigned x, int n);

main() {
    printf("%d\n", rightrot(170, 2));
}

int countbits(unsigned n) {
    int count = 0;
    while (n) {
	count++;
	n >>= 1;
    }
    return count;
}

unsigned rightrot(unsigned x, int n) {
    int numbits = countbits(x);
    int leftbit = 1 << numbits - 1;

    while (n) {
	if ((x & 1) != 1)
	    x >>= 1;
	else {
	    x >>= 1;
	    x |= leftbit;
	}
	n--;
    }
    return x;
}

#include <stdio.h>

/*
 *  Defines the function any(s1, s2);
 */

int any(char s1[], char s2[]);

main()
{
    char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    char s2[] = {'d', 'e', 'f', '\0'};
    int firstDex = any(s1, s2);
    printf("%d\n", firstDex);
}

int any(char s1[], char s2[]) {
    int i, j;
    /* loop through s1 */
    for(i = 0; s1[i] != '\0'; i++)
	for(j = 0; s2[j] != '\0'; j++)
	    if(s1[i] == s2[j])
		return i;
    return -1;
}

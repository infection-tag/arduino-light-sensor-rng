#include <stdio.h>
#include <stdlib.h>
#include <string.h>  /* strstr */
#include <math.h>    /* pow(x, y) */

#ifndef TRUE
    #define true !0
    #define false 0
#endif

int randomizer(int); /* generate random number from number of digits */
int pi_crawler(int); /* crawls the first million digits of pi for a 3 or 4 digit query */

int __digit_counter(int); /* finds the number of digits */
char* __pi_indexer(); /* turns pi file into char array - wildly innefficient */

pi = __pi_indexer();

int randomizer(int digits) { /* generate random number from number of digits */
    for(int i = 0; i < digits; i++) {
        return srand(pi_crawler(230)); /* example input */
    }
}

int pi_crawler(int query) { /* crawls the first million digits of pi for a 3 or 4 digit query */
    int query_digits = __digit_counter(query); 
    char q[query_digits];
    sprintf(q, "%d", query);
    char* pointer = strstr(pi, q);

    int index;
    index = pi - pointer; /* find index of substring */
    return index;
}

int __digit_counter(int n) { /* finds the number of digits */
    if (n < 0) return numPlaces((n == INT_MIN) ? INT_MAX: -n);
    if (n < 10) return 1;
    return 1 + numPlaces(n / 10);
}

char* __pi_indexer() {
    FILE* PI_FILE = fopen("pi.txt", "r");
    char ret[1000000];   
    int i;

    for(i = 0; i < 1000000; i++)
        fscanf(PI_FILE, "%c", ret[i]);

    return ret;
}

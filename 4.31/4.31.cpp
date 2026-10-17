#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j;

    for (i = -4; i <= 4; i++) {
        
        for (j = 0; j < abs(i); j++) {
            printf(" ");
        }
        
        for (j = 0; j < 9 - 2 * abs(i); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
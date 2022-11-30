#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word*/

main() 
{
    int c, word, state;

    state = OUT;
    word = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (word == IN) {
                printf('\n');
                word = OUT;
            }
            putchar(c);
        }
        else if (state == OUT) {
            state = IN;
            word = IN;
            putchar(c);
        }
    }
}
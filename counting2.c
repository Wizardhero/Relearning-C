#include <stdio.h>

main () 
{   
    int c, d;
    int blank, tab, nl;

    d = ' ';
    blank = 0;
    tab = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }
        
        if (c == '\t') {
            tab++;
        }
        
        if (c == ' ') {
            blank++;
        }

        if (d != ' ') {
            putchar(c);
        }
        d = c;
    }
    printf("newline: %d /t tabs: %d /t blanks: %d", nl, tab, blank);
}
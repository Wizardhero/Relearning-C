#include <stdio.h>

main () 
{   
    int c;
    int blank, tab, nl;

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
    }
    printf("newline: %d /t tabs: %d /t blanks: %d", nl, tab, blank);
}
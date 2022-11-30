#include <stdio.h>

main() 
{
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;

    int i = 0;
    while ((c=getchar()) != '\n') {
        if (i >= lim-1) {
            break;
        }
        if (c == EOF) {
            break;
        }
        s[i] = c;
        i++;
    }
}
#include <stdio.h>
#include <limits.h>
#include <float.h>

main () 
{
    char minVariable, maxVariable, umaxVariable;
    short minVariable2, maxVariable2, umaxVariable2;
    int minVariable3, maxVariable3, umaxVariable3;
    long minVariable4, maxVariable4, umaxVariable4;

    minVariable = CHAR_MIN;
    maxVariable = CHAR_MAX;
    umaxVariable = UCHAR_MAX;
    minVariable2 = SHRT_MIN;
    maxVariable2 = SHRT_MAX;
    umaxVariable2 = USHRT_MAX;
    minVariable3 = INT_MIN;
    maxVariable3 = INT_MAX;
    umaxVariable3 = UINT_MAX;
    minVariable4 = LONG_MIN;
    maxVariable4 = LONG_MAX;
    umaxVariable4 = ULONG_MAX;

    printf("%c %c %c %d %d %hu %d %d %u %ld %ld %lu", minVariable, maxVariable, umaxVariable, minVariable2, maxVariable2, umaxVariable2, minVariable3, maxVariable3, umaxVariable3, minVariable4, maxVariable4, umaxVariable4);

}
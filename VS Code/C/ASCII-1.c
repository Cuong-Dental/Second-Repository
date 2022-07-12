#include <stdio.h>

char string[10];

int main()
{
    printf ("Enter string: ");
    scanf ("%s", string );
    printf ("%d\n", string[1] + string[2]);
    return 0;
}
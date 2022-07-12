#include <stdio.h>

char character= 0;

int main ()
{
    for(character = 0; character <= 255; character++)
    {
        if(character % 10 != 0)
        {
            printf("%d - %c\t\t", character, character);
        }
        else printf("%d - %c\n", character, character);
    }
    printf("%d - %c", character, character);
    return 0;
}
#include "main.h"
void print_alphabet_x10(void)
{
    int x;
    x = 0;
    while (x<10)
    {   char i;
        for(i = 'a'; i <= 'z'; i++)
            _putchar(i);

        _putchar('\n');
	x++;
    }
}
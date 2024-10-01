#include <stdio.h>
#include <string.h>

int convert_roman_to_number(char c);
int roman_to_integer(char *s);

int convert_roman_to_number(char c)
{
    int result = 0;

    switch (c)
    {
        case 'M':
            result = 1000;
            break;
        case 'D':
            result = 500;
            break;
        case 'C':
            result = 100;
            break;
        case 'L':
            result = 50;
            break;
        case 'X':
            result = 10;
            break;
        case 'V':
            result = 5;
            break;
        case 'I':
            result = 1;
            break;
        default:
            break;
    }

    return result;
}

int roman_to_integer(char *s)
{
    int result = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (convert_roman_to_number(s[i]) < convert_roman_to_number(s[i + 1]))
        {
            result = result - convert_roman_to_number(s[i]);
        }
        else
        {
            result = result + convert_roman_to_number(s[i]);
        }
    }

    return result;
}

int main(void)
{
    printf("Output: %d\n", roman_to_integer("III"));
    printf("Output: %d\n", roman_to_integer("LVIII"));
    printf("Output: %d\n", roman_to_integer("MCMXCIV"));

    return 0;
}
#include <stdio.h>
#include <string.h>

int roman_to_integer(char *s);

int roman_to_integer(char *s)
{
    int result = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'M')
        {
            result += 1000;
        }
        else if (s[i] == 'D')
        {
            if ( i < length - 1 && s[i + 1] == 'M')
            {
                result += 900;
            }
            else
            {
                result += 500;
            }
        }
        else if (s[i] == 'C')
        {
            if (i < length - 1 && s[i + 1] == 'D')
            {
                result += 400;
            }
            else
            {
                result += 100;
            }
        }
        else if (s[i] == 'L')
        {
            if (i < length - 1 && s[i + 1] == 'C')
            {
                result += 90;
            }
            else
            {
                result += 50;
            }
        }
        else if (s[i] == 'X')
        {
            if (i < length - 1 && s[i + 1] == 'L')
            {
                result += 40;
            }
            else
            {
                result += 10;
            }
        }
        else
        {
            if (s[i] == 'I')
            {
                if (i < length - 1)
                {
                    if (s[i + 1] == 'V')
                    {
                        result += 4;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        result += 9;
                    }
                    else
                    {
                        result += 1;
                    }
                }
            }
            else if (s[i] == 'V')
            {
                result += 5;
            }
        }
    }

    return result;
}

int main(void)
{
    printf("Output: %d\n", roman_to_integer("IV"));
    // printf("%d\n", roman_to_integer("LVIII"));
    // printf("%d\n", roman_to_integer("MCMXCIV"));

    return 0;
}
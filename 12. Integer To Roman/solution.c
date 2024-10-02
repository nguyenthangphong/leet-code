#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *integer_to_roman(int num);

char *integer_to_roman(int num)
{
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char *result = (char *)malloc(16 * sizeof(char));

    if (result == NULL)
    {
        return NULL;
    }

    result[0] = '\0';

    int position = 0;

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            num -= values[i];
            position += sprintf(result + position, "%s", symbols[i]);
        }
    }

    return result;
}

int main(void)
{
    char *output = integer_to_roman(3749);
    printf("Output: %s\n", output);
    
    free(output);

    return 0;
}
#include <stdio.h>
#include <string.h>

int titleToNumber(char *columnTitle);

int titleToNumber(char *columnTitle)
{
    int length = strlen(columnTitle);
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum * 26;
        sum += columnTitle[i] - 'A' + 1;
    }

    return sum;
}

int main(void)
{
    printf("Output : %d\n", titleToNumber("A"));
    printf("Output : %d\n", titleToNumber("AB"));
    printf("Output : %d\n", titleToNumber("ZY"));
    printf("Output : %d\n", titleToNumber("FXSHRXW"));

    return 0;
}
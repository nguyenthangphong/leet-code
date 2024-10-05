#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *add_binary(char *a, char *b);

char *add_binary(char *a, char *b)
{
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    int length = ((sizeA > sizeB) ? sizeA : sizeB) + 1;
    char *result = (char *)malloc(length + 1);

    result[length] = '\0';
    int sum = 0;

    while (sizeA > 0 || sizeB > 0 || sum > 0)
    {
        if (sizeA > 0)
        {
            sum += a[--sizeA] - '0';
        }

        if (sizeB > 0)
        {
            sum += b[--sizeB] - '0';
        }

        result[--length] = sum % 2 + '0';
        sum /= 2;
    }

    return result + length;
}


int main(void)
{
    char *output1 = add_binary("11",  "1");
    char *output2 = add_binary("1010", "1011");

    printf("Output : %s\n", output1);
    printf("Output : %s\n", output2);

    free(output1);
    free(output2);

    return 0;
}
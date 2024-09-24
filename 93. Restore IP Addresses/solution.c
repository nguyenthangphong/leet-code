#include <stdio.h>
#include <string.h>

#define MAX 20

char **restoreIpAddresses(char *s, int *returnSize)
{
    int i = 0;
    int length = strlen(s);
    int count = 0;

    while (i < length)
    {
        char number = s[i] - '0';

        if (count == 0 && number <= 2)
        {
            count++;
        }
        else if (count == 1 && number <= 5)
        {
            count++;
        }
        else if (count == 2 && number <= 5)
        {
            count = 0;
        }


        i++;
    }
    
}

int main(void)
{

    return 0;
}
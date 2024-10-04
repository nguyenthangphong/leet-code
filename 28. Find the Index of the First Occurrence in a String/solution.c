#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int check_is_exists_array(char *haystack);
int strStr(char *haystack, char *needle);

int strStr(char *haystack, char *needle)
{
    int position = 0;
    int length1 = strlen(haystack);
    int length2 = strlen(needle);
    int *data = (int *)malloc((length2 + 1) * sizeof(int));

    printf("length2 = %d\n", length2);

    int result = 0;

    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (haystack[i] == needle[j])
            {
                printf("haystack[%d] = %c\n", i, haystack[i]);
                
                if (position < length2)
                {
                    data[position] = i;
                    printf("data[%d] = %d\n", position, data[position]);
                    position++;
                }
            }
        }
    }

    printf("position = %d\n", position);

    if (position == length2 - 1)
    {
        return -1;
    }

    result = data[0];

    free(data);

    return result;
}

int main(void)
{
    // printf("Output: %d\n", strStr("butsad", "sad"));
    printf("Output: %d\n", strStr("leetcode", "leeto"));
    // printf("Output: %d\n", strStr("hello", "ll"));

    return 0;
}
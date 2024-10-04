#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle);

int strStr(char *haystack, char *needle)
{
    int count = 0;
    int result = 0;
    int length_haystack = strlen(haystack);
    int length_needle = strlen(needle);

    for (int i = 0; i < length_haystack; i++)
    {
        result = i;

        for (int j = 0; j < length_needle; j++)
        {
            if (haystack[i] == needle[j])
            {
                count++;
                i++;
            }
            else
            {
                count = 0;
            }
        }

        if (count == length_needle)
        {
            return result;
        }

        count = 0;
        i = result;
    }

    return -1;
}

int main(void)
{
    printf("Output: %d\n", strStr("butsad", "sad"));
    printf("Output: %d\n", strStr("leetcode", "leeto"));
    printf("Output: %d\n", strStr("hello", "ll"));

    return 0;
}
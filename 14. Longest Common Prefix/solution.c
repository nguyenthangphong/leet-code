#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longest_common_prefix(char **strs, int strsSize);

char *longest_common_prefix(char **strs, int strsSize)
{
    if (strsSize == 0)
    {
        return "";
    }

    int length = strlen(strs[0]);
    char *result = (char *)malloc((length + 1) * sizeof(char));

    strcpy(result, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (j < strlen(result) && strs[i][j] == result[j])
        {
            j++;
        }

        result[j] = '\0';
    }

    return result;
}

int main(void)
{
    char *input1[] = {"flower", "flow", "flight"};
    char *input2[] = {"dog", "racecar", "car"};

    char *output1 = longest_common_prefix(input1, 3);
    char *output2 = longest_common_prefix(input2, 3);

    printf("Output: %s\n", output1);
    printf("Output: %s\n", output2);

    free(output1);
    free(output2);

    return 0;
}
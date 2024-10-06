#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize);

void reverseString(char *s, int sSize)
{
    for (int i = 0; i < sSize / 2; i++)
    {
        char c = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = c;
    }
}

int main(void)
{
    char input1[] = "hello";
    char input2[] = "Hannah";

    reverseString(input1, 5);
    reverseString(input2, 6);

    printf("Output : %s\n", input1);
    printf("Output : %s\n", input2);

    return 0;
}
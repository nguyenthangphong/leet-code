#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool is_palindrome(int x);

int main(void)
{
    int x1 = 121;
    printf("%d\n", is_palindrome(x1));

    int x2 = -121;
    printf("%d\n", is_palindrome(x2));

    int x3 = 10;
    printf("%d\n", is_palindrome(x3));

    return 0;
}

bool is_palindrome(int x)
{
    int64_t value = x;
    int64_t result = 0;

    while (value > 0)
    {
        int temp = value % 10;
        result = result * 10 + temp;
        value = value / 10;
    }

    if (result != x)
    {
        return false;
    }

    return true;
}
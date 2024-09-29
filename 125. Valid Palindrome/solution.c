#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int remove_special_characters(const char *source, char *target);
void convert_to_low_characters(const char *source, char *target);
void remove_space_string(const char *source, char *target);
bool is_palindrome(const char *source);

int remove_special_characters(const char *source, char *target)
{
    int length = strlen(source);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (isalnum(source[i]))
        {
            target[count] = source[i];
            count++;
        }
    }

    target[length] = '\0';

    return count;
}

void convert_to_low_characters(const char *source, char *target)
{
    int length = remove_special_characters(source, target);

    for (int i = 0; i < length; i++)
    {
        target[i] = tolower(target[i]);
    }

    target[length] = '\0';
}

void remove_space_string(const char *source, char *target)
{
    int position = 0;
    int length = strlen(source);

    for(int i = 0; i < length; i++)
    {
        if (isspace(source[i]))
        {
            continue;
        }

        target[position++] = source[i];
    }

    target[position] = '\0';
}

bool is_palindrome(const char *source)
{
    int length = strlen(source);

    char target[length + 1];

    convert_to_low_characters(source, target);

    char newTarget[length + 1];

    remove_space_string(target, newTarget);

    int i = 0, j = strlen(newTarget) - 1;

    while (i <= j)
    {
        if (newTarget[i] != newTarget[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main(void)
{
    char input1[] = "A man, a plan, a canal: Panama";
    char input2[] = "race a car";
    char input3[] = " ";

    if (is_palindrome(input1))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if (is_palindrome(input2))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if (is_palindrome(input3))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
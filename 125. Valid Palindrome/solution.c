#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool check_special_character(char c);
char *remove_special_characters(const char *source);
void convert_to_low_characters(char *s);
bool is_palindrome(char *s);

int main(void)
{
    char input[] = "A man, a plan, a canal: Panama";
    char output[31];


    for (int i = 0; i < strlen(input); i++)
    {
        printf("Checking %c ...\n", input[i]);

        if (check_special_character(input[i]))
        {
            printf("%c ", input[i]);
        }
    }

    return 0;
}

bool check_special_character(char c)
{
    char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < strlen(alphabets); i++)
    {
        printf("alphabets =  %c\n", alphabets[i]);

        if (c != alphabets[i])
        {
            return false;
        }
    }

    return true;
}

char *remove_special_characters(const char *source)
{
    
    char *target;


}

void convert_to_low_characters(char *s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {

    }
}

bool is_palindrome(char *s)
{
    
}
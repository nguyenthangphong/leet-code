#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VALUE   255
#define MAX_LENGTH  12
#define MAX_PADDING 3

bool check_Valid_String(char *s, int length);
void cut_String(char *s, int length);
char **restore_Ip_Addresses(char *s, int *returnSize);

int main(void)
{
    char input[MAX_LENGTH] = "25525611135";

    int length = strlen(input);

    if (check_Valid_String(input, length))
    {
        cut_String(input, length);
    }
    
    return 0;
}

bool check_Valid_String(char *s, int length)
{
    for (int i = 0; i < length; i++)
    {
        int value = s[i] - '0';

        if (value > 9 || value < 0)
        {
            return false;
        }
    }

    return true;
}

void cut_String(char *s, int length)
{
    // int size = length + 3;
    // char result[size];

    printf("length = %d\n", length);

    for (int i = 0; i < length; i += MAX_PADDING)
    {
        char temp1[1];
        char temp2[2];
        char temp3[3];

        int number1;
        int number2;
        int number3;

        strncpy(temp3, s + i, MAX_PADDING);
        temp3[MAX_PADDING] = '\0';
        number3 = atoi(temp3);
        printf("number3 = %d\n", number3);
        
        if (number3 <= MAX_VALUE)
        {
            for (int j = 0; j < 2; j++)
            {
                strncpy(temp1, temp3, MAX_PADDING - 1 - j);
                temp1[MAX_PADDING - 1 - j] = '\0';
                number1 = atoi(temp1);
                printf("number1 = %d\n", number1);

                strncpy(temp2, temp3 + 2 - j, MAX_PADDING - 2 + j);
                temp2[MAX_PADDING - 2 + j] = '\0';
                number2 = atoi(temp2);
                printf("number2 = %d\n", number2);
            }
        }
        else
        {

        }
    }
}

// char **restore_Ip_Addresses(char *s, int *returnSize)
// {

// }
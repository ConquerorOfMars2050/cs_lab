#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char input[1000];
    char cleaned[1000];
    int length = 0;
    
    fgets(input, sizeof(input), stdin);
    
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (!isspace(input[i]))
        {
            cleaned[length++] = tolower(input[i]);
        }
    }
    
    cleaned[length] = '\0'; 

    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (cleaned[i] != cleaned[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

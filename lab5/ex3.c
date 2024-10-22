#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[1000];
    char output[1000];

    scanf("%s", input);

    int i;
    int length = strlen(input);

    for (i = 0; i < length; i++)
    {
        if (input[i] == '#')
        {
            output[i] = '_';
        }
        else
        {
            output[i] = input[i]; 
        }
    }

    output[length] = '\0';

  
    printf("%s\n", output);

    return 0;
}

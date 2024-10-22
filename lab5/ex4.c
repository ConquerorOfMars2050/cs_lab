#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input[1000];
    char output[1000];

    fgets(input, sizeof(input), stdin);

    int i = 0, j = 0;
    int space = 0;

    while (input[i] != '\0')
    {
        if (isspace(input[i]))
        {
            if (!space)
            {
                output[j++] = ' ';
                space = 1;
            }
        }
        else
        {
            output[j++] = input[i];
            space = 0;
        }
        i++;
    }

    if (j > 0 && output[j - 1] == ' ')
    {
        j--;
    }

    output[j] = '\0';

    printf("%s\n", output);

    return 0;
}

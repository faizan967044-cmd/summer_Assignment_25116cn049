#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
    {
        count = 0;

        for (j = 0; j < len; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}
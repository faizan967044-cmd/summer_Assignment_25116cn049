#include <stdio.h>

int main()
{
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            newStr[j] = str[i];
            j++;
        }
    }

    newStr[j] = '\0';

    printf("String after removing spaces: %s", newStr);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j;

    printf("Enter a string to be reversed: ");
    gets(str);
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is: %s\n", str);
    return 0;
}

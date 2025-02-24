#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);

    if (strcmp(s, "11") == 0 || strcmp(s, "111") == 0)

    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}

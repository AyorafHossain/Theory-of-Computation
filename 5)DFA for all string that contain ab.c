#include <stdio.h>
#include <string.h>

int main()
{
    while (1)
    {
        char s[100];
        printf("Enter the string:");
        gets(s);
        int n = strlen(s);
        int i, count = 1, contain = 0;


        for (i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'b')
            {
                count = 0;
                break;
            }
        }



        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                contain++;
            }
        }

        if (count == 1 && contain!=0)
        {
            printf("Accepted\n");
        }
        else
        {
            printf("Rejected\n");
        }
    }

    return 0;
}

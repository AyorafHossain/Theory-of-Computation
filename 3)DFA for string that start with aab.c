#include <stdio.h>
#include <string.h>

int main()
{

    while(1)
    {
        char s[100];
        int count=1;
        printf("Enter the string:");
        gets(s);

        int n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'b')
            {
                count=0;
                break
            }
        }

        if (count == 1 && s[0] == 'a' && s[1] == 'a'&s[2]=='b')
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




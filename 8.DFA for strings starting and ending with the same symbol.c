#include <stdio.h>
#include <string.h>

int main()
{
    while(1)
    {
        char s[100];
        printf("Enter the string:");
        gets(s);

        //check EPSILON is excepted or not
        if(s == '\0')
        {
            printf("Accepted\n");

        }

        int n = strlen(s);
        int count = 1;

        // Check if the string contains only 'a' and 'b'
        for(int i = 0; i < n; i++)
        {
            if(s[i] != 'a' && s[i] != 'b')
            {
                count = 0;
            }
        }


        if(count == 1 && s[0] == s[n - 1])
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

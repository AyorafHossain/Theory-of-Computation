#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    while (1)
    {
        char s[100];
        printf("Enter the string:");
        gets(s);

        //check EPSILON is excepted or not
        if(s == '\0')
        {
            printf("Accepted\n");

        }

        int length = strlen(s);
        int count = 1;

        for (int i = 0; i < length; i++)
        {

            if (s[i] != 'a' && s[i] != 'b')
            {
                count = 0;
                break;
            }
        }


        if (count == 1 && length <= 2)
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


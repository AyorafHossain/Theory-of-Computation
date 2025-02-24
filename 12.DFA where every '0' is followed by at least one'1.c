#include <stdio.h>
#include <string.h>

int main()
{


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
        int i, count = 1;
        int isAccepted = 1;

        int length = strlen(s);

        // Check if the string contains only 'a' or 'b'
        for(i = 0; i < length; i++)
        {
            if(s[i] != '0' && s[i] != '1')
            {
                count = 0;
                break;
            }
        }

        // Check that every 'a' is followed by 'b'
       for (i = 0; i < length; i++)
        {
            if (s[i] == '0')
            {

                if (s[i + 1]!= '1')
                {
                    isAccepted = 0;
                    break;
                }
            }
        }

        // Print the result based on the conditions
        if (isAccepted == 1 && count == 1)
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

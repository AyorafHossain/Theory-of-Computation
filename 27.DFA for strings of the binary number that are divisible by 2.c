#include <stdio.h>
#include <string.h>

int main()
{

    while(1)
    {
        char s[100];
        gets(s);
        int count=1;
        int n=strlen(s);

        for(int i=0; i<n; i++)
        {
            if(s[i]!='0'&& s[i]!='1')
            {
                count=0;
            }
        }
        if(s[n-1]=='0' && count==1)
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


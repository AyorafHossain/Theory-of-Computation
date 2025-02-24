#include <stdio.h>
#include <string.h>

int main()
{
    while(1)
    {
        char s[100];
        printf("Enter the string:");
        gets(s);
        int n=strlen(s);
        int count=1,i;
        for(i=0;i<n;i++)
        {
            if(s[i]!='a'&&s[i]!='b')
            {
                count=0;
                break;
            }
        }

        if (s[n-2] =='a'&& s[n-1]=='b'&&count==1)
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





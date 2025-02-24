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
        int count=1,contain=0,i;
        for(i=0;i<n;i++)
        {
            if(s[i]!='a'&&s[i]!='b')
            {
                count=0;
                break;
            }
        }
        for(i=0; i<n-1; i++)
        {
            if (s[i] =='b'&& s[i+1]=='a'&& s[i+2]=='b' && s[i+3]=='a')
            {
               contain++;
            }

        }
        if(count==1&&contain!=0)
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




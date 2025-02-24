#include<stdio.h>
#include<string.h>
int main()

{
    char s[100];
    while(1)

    {
        printf("Enter a string : ");
        gets(s);
        int n=strlen(s);
        int flag = 1;

        for (int i = 0; i < n; i++)
        {

            if (s[i] != '0' && s[i] != '1')
            {
                flag = 0;
                break;
            }
        }

        if(s[0]=='0'&& n%2!=0&&flag==1)
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




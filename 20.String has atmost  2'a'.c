#include<stdio.h>
#include<string.h>
int main()

{
    char s[100];
    while(1)

    {
        printf("Enter a string : ");
        gets(s);
        if(s=='\0')
        {
           printf("Accepted\n");
        }
        int n=strlen(s);
        int flag = 1;

        for (int i = 0; i < n; i++)
        {

            if (s[i] != 'a' && s[i] != 'b')
            {
                flag = 0;
                break;
            }
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
           if( s[i]=='a')
           {
               count++;
           }
        }

        if(flag==1&&count<=2)
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

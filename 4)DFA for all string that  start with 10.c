#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char s[100];
        printf("Enter the string:");
        gets(s);

        int n = strlen(s);
        int i, count = 1;

        for (i = 0; i < n; i++)
        {
            if (s[i] != '0'&& s[i] != '1')
            {
                count=0;
            }
        }


        if (count == 1 && s[0] == '1' && s[1] == '0')
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

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
double htoi(char s[])
{
    int i;
    double n = 0;
    for(i = 0;isdigit(s[i]) || isalpha(s[i]);i++)
        {
            if(i == 0){
                if(s[i] == '0')
                    continue;
            }
            if(i == 1)
                 if(s[i] == 'x' || s[i] == 'X')
                     continue;
            if(isdigit(s[i])){
                n = 16 * n + (s[i] - '0');
            }
            else if((s[i] >= 'A' && s[i] <= 'F')|| (s[i] >= 'a' && s[i] <= 'f')){
                        if(isupper(s[i]))
                            n = 16 * n + (s[i] - 'A' + 10);
                        else
                            n = 16 * n + (s[i] - 'a' + 10);
                    }
            else{
                printf("Invalid hexadecimal digit!");
                exit(-1);
            }

        }
    return n;

}

int main()
{
    printf("%5.0f\n",htoi("ABCD"));
}

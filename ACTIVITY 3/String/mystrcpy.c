#include "mystring.h"
void mystrcpy(char str1[], char str2[]) // function definition
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    
    str2[i] =' \0';    
}

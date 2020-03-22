#include <stdio.h>

int toint(char *str){
    int n = 0;
    char *s = str;
    while(*s)
    {
        n = n*10 + (*s++ - '0');
    }
    return n;
}

int main()
{
    printf("%d", toint("12345"));
    return 0;
}

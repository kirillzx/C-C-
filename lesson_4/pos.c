#include <stdio.h>
#include <string.h>

char *position(char *s1, char c) {

    int i=0;
    int len1 = strlen(s1);

    while (s1[i] != c && i!=len1){
        i++;
    }
    return i;
}

int main()
{
    printf("%d", position("kirill", 'r')+1);
    return 0;
}

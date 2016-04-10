#include <stdio.h>

int main(int argc, char *argv[]){
    char s[20] = "How could do that?";
    char s1[20] = "could";

    int result = 0;

    result = strindex(s, s1);

    printf("%d", result);
}

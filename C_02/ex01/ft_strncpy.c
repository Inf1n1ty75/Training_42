#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    int i;

    i = 0;
    while (i < n && src[i]) {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
int main() {
    char src [] = "Hello";
    char dest [] = "everyone";
    char src2 [] = "Hello";
    char dest2 [] = "everyone";

    ft_strncpy(dest, src, 4);
    printf("%s\n", dest);
    strncpy(dest2, src2, 4);
    printf("%s", dest2);
}
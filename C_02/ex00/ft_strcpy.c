#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src) {
    int i;

    i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    while (dest[i]) {
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

    ft_strcpy(dest, src);
    printf("%s\n", dest);
    strcpy(dest2, src2);
    printf("%s", dest2);
}
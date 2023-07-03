#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    int i;

    i = 0;
    while (src[i] && size - 1 > i) {
        dest[i] = src[i];
        i++;
    }
    while (dest[i]) {
        dest[i] = '\0';
        i++;
    }
    return i;
}

int main() {
    char dest [] = "hello";
    char src [] = "there";
    char dest2 [] = "hello";
    char src2 [] = "there";
    unsigned int size;

    size = 4;

    printf("%lu\n", strlcpy(dest, src, size));
    printf("%u\n", ft_strlcpy(dest2, src2, size));
    strlcpy(dest, src, size);
    printf("%s\n", dest);
    ft_strlcpy(dest2, src2, size);
    printf("%s\n", dest2);
}
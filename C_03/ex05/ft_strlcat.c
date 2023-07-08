#include <string.h>
#include <stdio.h>

int ft_strlen(char *str) {
    int i;

    i = 0;
    while (str[i])
    i++;
    return i;

}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    int i;
    int len;

    i = 0;
    len = ft_strlen(dest);
    while (src[i] && size > i) {
        dest[len] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return i + len;
}

int main() {
    char dest [] = "hello";
    char src [] = "there";
    char dest2 [] = "hello";
    char src2 [] = "there";
    unsigned int size;

    size = 0;

    printf("%lu\n", strlcat(dest, src, size));
    printf("%u\n", ft_strlcat(dest2, src2, size));
}
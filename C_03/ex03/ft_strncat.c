#include <stdio.h>
#include <string.h>

int ft_strlen(char *str) {
    int i;

    i = 0;
    while (str[i])
    i++;
    return i;
}

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    int i;
    int len;

    i = 0;
    len = ft_strlen(dest);
    while (src[i] && i < nb) {
        dest[len] = src[i];
        i++;
        len++;
    }
    src[i] = '\0';
    return dest;
}

int main() {
    char dest [42] = "hello";
    char src [42] = "can_you_copy_me";
    char dest2 [42] = "hello";
    char src2 [42] = "can_you_copy_me";
    unsigned int nb;

    nb = 7;
    printf("%s\n", strncat(dest, src, nb));
    printf("%s\n", ft_strncat(dest2, src2, nb));
}


#include <stdio.h>
#include <string.h>

int ft_strlen(char *str) {
    int i;

    i = 0;
    while (str[i])
    i++;
    return i;
}

char *ft_strcat(char *dest, char *src) {
    int i;
    int len;

    i = 0;
    len = ft_strlen(dest);
    while (src[i]) {
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
    
    printf("%s\n", strcat(dest, src));
    printf("%s\n", ft_strcat(dest2, src2));
}
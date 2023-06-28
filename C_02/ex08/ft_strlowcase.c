#include <stdio.h>

char *ft_strlowcase(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "HELLO";
    char str2[] = "H3LL0";
    char str3[] = "";

    printf("%s\n", ft_strlowcase(str));
    printf("%s\n", ft_strlowcase(str2));
    printf("%s", ft_strlowcase(str3));
}
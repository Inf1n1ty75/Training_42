#include <stdio.h>

char *ft_strupcase(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "hello";
    char str2[] = "H3ll0";
    char str3[] = "";

    printf("%s\n", ft_strupcase(str));
    printf("%s\n", ft_strupcase(str2));
    printf("%s", ft_strupcase(str3));
}
#include <stdio.h>

int ft_str_is_printable(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= 32 &&  str[i] <= 126)
        i++;
        else
        return 0;
    }
    return 1;
}

int main() {
    char str[] = "Hello";
    char str2[] = "\t";
    char str3[] = "";

    printf("%d\n", ft_str_is_printable(str));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d", ft_str_is_printable(str3));
}
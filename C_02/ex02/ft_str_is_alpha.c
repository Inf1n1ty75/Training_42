#include <stdio.h>

int ft_str_is_alpha(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= 'a' &&  str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        i++;
        else
        return 0;
    }
    return 1;
}

int main() {
    char str[] = "hello";
    char str2[] = "h3ll0";
    char str3[] = "";

    printf("%d\n", ft_str_is_alpha(str));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d", ft_str_is_alpha(str3));
}
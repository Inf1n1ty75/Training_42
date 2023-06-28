#include <stdio.h>

int ft_str_is_numeric(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= '0' &&  str[i] <= '9')
        i++;
        else
        return 0;
    }
    return 1;
}

int main() {
    char str[] = "4224";
    char str2[] = "h3ll0";
    char str3[] = "";

    printf("%d\n", ft_str_is_numeric(str));
    printf("%d\n", ft_str_is_numeric(str2));
    printf("%d", ft_str_is_numeric(str3));
}
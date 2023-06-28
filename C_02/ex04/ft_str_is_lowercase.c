#include <stdio.h>

int ft_str_is_lowercase(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        if (str[i] >= 'a' &&  str[i] <= 'z')
        i++;
        else
        return 0;
    }
    return 1;
}

int main() {
    char str[] = "hello";
    char str2[] = "Hello";
    char str3[] = "";

    printf("%d\n", ft_str_is_lowercase(str));
    printf("%d\n", ft_str_is_lowercase(str2));
    printf("%d", ft_str_is_lowercase(str3));
}
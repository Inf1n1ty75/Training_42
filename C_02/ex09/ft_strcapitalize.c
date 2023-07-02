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

char *ft_strcapitalize(char *str) {
    int i;
    int cap;

    i = 0;
    cap = 1;
    ft_strlowcase(str);
    while (str[i]) {
        if (cap == 1) {
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] -= 32;
                cap = 0;
                i++;
            }
        }
        if (str[i] >= 48 && str[i] <= 57 || str[i] >= 64 && str[i] <= 122)
        i++;
        else {
        cap = 1;
        i++;
    }
}
return str;
}

int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s\n", ft_strcapitalize(str));
}
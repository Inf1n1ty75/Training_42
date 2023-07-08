#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find) {
    int i;
    int j;

    i = 0;
    j = 0;
        while (str[i]) {
            while (to_find[j] == str[i+j]) {
                if (to_find[j + 1] == '\0')
                return str + i;
                j++;
            }
        i++;
        j = 0;
        }
        str = NULL;
        return str;

}

int main() {
    char str [] = "can you find me";
    char to_find [] = "find";
    char str2 [] = "ok more difficult, can you findefind me";
    char to_find2 [] = "find";
    char str3 [] = "ok morre and moree difficult, ";
    char to_find3 [] = "more";


    printf("%s\n", strstr(str, to_find));
    printf("%s\n", ft_strstr(str, to_find));
    printf("%s\n", strstr(str2, to_find2));
    printf("%s\n", ft_strstr(str2, to_find2));
    printf("%s\n", strstr(str3, to_find3));
    printf("%s\n", ft_strstr(str3, to_find3));

}
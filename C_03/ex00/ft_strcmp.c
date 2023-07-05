#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
    i++;
    return s1[i] - s2[i];
    }

int main () {
    char s1 [] = "one";
    char s2 [] = "two";
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", ft_strcmp(s1, s2));

}
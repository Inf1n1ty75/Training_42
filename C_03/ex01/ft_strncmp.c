#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
    i++;
    return s1[i] - s2[i];
    }

int main () {
    char s1 [] = "im same";
    char s2 [] = "im not same";
    int n;
    int i;

    i = 0;
    n = strlen(s1);
    while (i < n) {
    printf("For %d\n", i);
    printf("%d\n", strncmp(s1, s2, n));
    printf("%d\n", ft_strncmp(s1, s2, n));
    i++;
    }

}
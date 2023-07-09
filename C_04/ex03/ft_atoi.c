#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_atoi(char *str) {
    int i;
    int num;
    int sign;

    i = 0;
    num = 0;
    sign = 1;
    while (str[i] < 65) {
        if (str[i] >= 0 && str[i] <= 32)
        i++;
        if (str[i] == '+')
        i++;
        if (str[i] == '-') {
            sign *= -1;
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + str[i] - '0';
            i++;
        }
    }
    return num * sign;
}

int main () {
    char str [] = " \t\n- - + + -+--+1234ab567cd";

    printf("%d\n", ft_atoi(str));
    return 0;
}
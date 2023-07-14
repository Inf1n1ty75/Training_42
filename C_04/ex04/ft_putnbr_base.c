#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str) {
    int i;

    i = 0;
    while (str[i])
    i++;
    return i;

}

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_check_base(int nbr, char *base) {
    int i;
    int j;
    int base_len;

    i = 0;
    base_len = ft_strlen(base);

    if (base_len <= 1 || base[i] == '\0')
    return 1;
    while (base[i]) {
        if (base[i] == '+' || base[i] == '-')
        return 1;
        i++;
    }
    i = 0;
    while (base[i]) {
        j = i + 1;
        while (base[j]) {
        if (base[i] == base[j])
        return 1;
        j++;
        }
        i++;
    }
    return 0;
}

void ft_putnbr_base(int nbr, char *base) {
    int len_base;
    int i;
    char result [100];

    len_base = ft_strlen(base);
    i = 0;
    if (ft_check_base(nbr, base) == 1) {
        nbr = 0;
        ft_putchar('0');
    }
    if (nbr < 0) {
        nbr *= -1;
        ft_putchar('-');
    }
    while (nbr > 0) {
        result[i] = base[nbr % len_base];
        nbr = nbr / len_base;
        i++;
    }
    while (i > 0) {
        ft_putchar(result[i - 1]);
        i--;
    }
}

int main() {
    int nbr;
    char base [] = "0123456789ABCDEF";

    nbr = 42;
    ft_putnbr_base(nbr, base);
}
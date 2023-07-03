#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str) {
    int i;
    int deci;
    int remain;

    deci = 0;
    remain = 0;
    char base [16] = {'0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    i = 0;
    while (str[i]) {
        if (str[i] >= 0 && str[i] <= 31 || str[i] == 127) {
            ft_putchar(92);
            deci = str[i] / 16;
            remain = str[i] % 16;
            ft_putchar(base[deci]);
            ft_putchar(base[remain]);
            i++;
            }
        ft_putchar(str[i]);
        i++;
        }
    }

int main () {
    char str [] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}
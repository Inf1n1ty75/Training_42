#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}
void ft_print_comb2(void) {
    int first_digit;
    int last_digit;

    first_digit = 0;
    last_digit = 1;
    while (first_digit <= 98) {
        while (last_digit <= 99) {
        ft_putchar(first_digit / 10 + '0');
        ft_putchar(first_digit % 10 + '0');
        ft_putchar(' ');
        ft_putchar(last_digit / 10 + '0');
        ft_putchar(last_digit % 10 + '0');
        if (first_digit != 98 || last_digit != 99) {
            ft_putchar(',');
        }
        last_digit++;
    }
    first_digit++;
    last_digit = first_digit + 1;
}
}

int main() {
    ft_print_comb2();
}
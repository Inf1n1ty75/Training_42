#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    int first_digit;
    int second_digit;
    int third_digit;

    first_digit = '0';
    second_digit = '1';
    third_digit = '2';
while (first_digit < '7') {
    while (second_digit <= '8') {
        while (third_digit <= '9') {
            ft_putchar(first_digit);
            ft_putchar(second_digit);
            ft_putchar(third_digit);
            ft_putchar(',');
            ft_putchar(' '),
            third_digit++;
        }
        second_digit++;
        third_digit = second_digit + 1;
    }
    second_digit = first_digit + 1;
    first_digit++;
}
write(1, "789", 3);
}
                
int main() {
    ft_print_comb();
}
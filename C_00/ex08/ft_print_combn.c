#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void print_comb(char *first_comb, int n, int last_value) {
    int i;

    i = 0;
    //  Check If we have reached last comb
    if (first_comb[0] == last_value) {
        while (i < n) {
            ft_putchar(first_comb[i]);
            i++;
        }
        return;
    }
    //  If we have not reach last comb, add "," and " ".
    while (i < n) {
            ft_putchar(first_comb[i]);
            i++;
        }
    write(1, ", ", 2);
}

void ft_print_combn(int n) {
    char first_comb[10];
    char last_comb[10];
    int i;
    int pos;
    int new_value;

    i = 0;
    if (n < 0 || n > 10)
    return;
    while (i < n) {     // Create 2 table to compare first comb possible and the last comb.
        first_comb[i] = i + '0';
        last_comb[i] = (10 - n) + i + '0';
        i++;
    }
    print_comb(first_comb, n, last_comb[0]);     // write thr first comb.
    while (first_comb[0] != last_comb[0]) {     // Begin on last digit and everytime decrease by one.
        pos = n - 1;
        while (first_comb[pos] == last_comb[pos])         // If It's maxed, go to the leftmost digit.
        pos--;
        new_value = ++first_comb[pos];         // Here we are increasing last digit till it's not maxed.
        while (pos < n)         // When a comb set is done, we are incrementing next digit by previous + 1.
        first_comb[++pos] = ++new_value;
        print_comb(first_comb, n, last_comb[0]);
    }
}

int main() {
    ft_print_combn(3);
}
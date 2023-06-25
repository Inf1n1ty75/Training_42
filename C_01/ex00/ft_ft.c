#include <stdio.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main () {
    int nb;

    nb = 7;
    ft_ft(&nb);
    printf("%d", nb);
}
#include <stdio.h>

void ft_ft(int *nbr) {
    *nbr = 42;
}

int main() {
    int nb;
    int *nbr;

    nb = 7;
    nbr = &nb;
    ft_ft(nbr);
    printf("%d", *nbr);
}
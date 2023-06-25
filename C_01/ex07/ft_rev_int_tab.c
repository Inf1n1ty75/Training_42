#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_rev_int_tab(int *tab, int size) {
    int i;

    i = 0;
    while (i < size / 2) {
        ft_swap(&tab[i], &tab[size - i - 1]);
        i++;
    }
}

int main() {
    int tab[] = {25, 50, 75, 100, 125};
    ft_rev_int_tab(tab, 5);
    printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3] ,tab[4]);
}
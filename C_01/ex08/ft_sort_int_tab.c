#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size) {
    int i;
    int j;

    i = 0;
    while (i < size - 1) {
        if (tab[i] > tab[i + 1]) {
            ft_swap(&tab[i], &tab[i + 1]);
            i = 0;
        }
        i++;
    }
}
int main() {
    int tab[] = {110, 1, 3, 120, 50};
    ft_sort_int_tab(tab, 5);
    printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
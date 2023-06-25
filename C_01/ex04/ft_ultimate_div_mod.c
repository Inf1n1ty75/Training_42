#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;

}

int main () {
    int a;
    int b;

    a = 10;
    b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d", b);
}
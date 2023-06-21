#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a;
    int b;
    int *ptra;
    int *ptrb;

    a = 7;
    b = 10;
    ptra = &a;
    ptrb = &b; 
    ft_swap(ptra, ptrb);
    printf("%d\n", *ptra);
    printf("%d", *ptrb);
}
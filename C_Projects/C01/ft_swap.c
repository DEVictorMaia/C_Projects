void    ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 2;
    int *ptra = &a;
    int *ptrb = &b;

    printf(" Valores antes da troca:\n   a: %d\n   b: %d\n", a, b);
    ft_swap(ptra,  ptrb);
    printf(" Valores depois da troca:\n   a: %d\n   b: %d", a, b);
}
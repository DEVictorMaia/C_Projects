void    ft_swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void) {
    int a = 42;
    int b = 24;
    int *ptra = &a;
    int *ptrb = &b;

    printf(" Values before the swap:\n   a: %d\n   b: %d\n", a, b);
    ft_swap(ptra,  ptrb);
    printf(" Values after the swap:\n   a: %d\n   b: %d", a, b);
}
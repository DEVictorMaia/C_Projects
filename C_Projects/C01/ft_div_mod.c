void    ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>

int main(void) {
    int a = 177;
    int b = 6;
    int mod;
    int div;

    ft_div_mod(a, b, &div, &mod);

    printf (" Values to be divided:\n   Dividend: %d\n   Divisor: %d\n Quotient:\n   %d / %d = %d\n Module:\n   %d / %d = %d", a, b, a, b, div, a, b, mod);
}
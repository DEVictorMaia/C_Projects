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

    printf (" Valores a serem divididos:\n   Dividendo: %d\n   Divisor: %d\n Resultado da divisao:\n   %d / %d = %d\n Resto da divisao:\n   %d / %d = %d", a, b, a, b, div, a, b, mod);
}
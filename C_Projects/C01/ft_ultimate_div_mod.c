void    ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

void    ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a;
    
    *a = *a / *b;
    *b = temp % *b;
}

#include <stdio.h>

int  main(void) {
    int a = 150;
    int b = 4;
    int div;
    int mod;
    
    ft_div_mod(a, b, &div, &mod);
    printf (" Valores antes da divisao(Nao armazenados):\n   Dividendo: %d\n   Divisor: %d\n Resultado da divisao:\n   %d / %d = %d\n Resto da divisao:\n   %d / %d = %d\n", a, b, a, b, div, a, b, mod);
    
    ft_ultimate_div_mod(&a, &b);
    printf (" Valores modificados:\n   Dividendo: %d\n   Divisor: %d\n\n", a, b);
    
    ft_div_mod(a, b, &div, &mod);
    printf (" Valores depois da divisao(Armazenados):\n   Dividendo: %d\n   Divisor: %d\n Resultado da divisao:\n   %d / %d = %d\n Resto da divisao:\n   %d / %d = %d\n", a, b, a, b, div, a, b, mod);
}
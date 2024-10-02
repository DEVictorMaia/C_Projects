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
    int a = 1768;
    int b = 42;
    int div;
    int mod;
    
    ft_div_mod(a, b, &div, &mod);
    printf (" Values before the division:\n   Dividend: %d\n   Divisor: %d\n Quotient:\n   %d / %d =", a, b, a, b);
    printf(" %d\n Module:\n   %d / %d = %d\n", div, a, b, mod);
    
    ft_ultimate_div_mod(&a, &b);
    printf (" Stored values:\n   Dividend: %d\n   Divisor: %d\n\n", a, b);
    
    ft_div_mod(a, b, &div, &mod);
    printf (" Stored values:\n   Dividend: %d\n   Divisor: %d\n Quotient:\n   %d / %d =", a, b, a, b);
    printf(" %d\n Module:\n   %d / %d = %d\n", div, a, b, mod);
}
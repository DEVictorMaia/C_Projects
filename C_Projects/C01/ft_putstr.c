#include <unistd.h>

void    ft_putchar(char c) {
    write (1, &c, 1);
}

void    ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str++); // What a beautiful way to do this
    }
}

int main(void) {
    ft_putstr("Victor");
}
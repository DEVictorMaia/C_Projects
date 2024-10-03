#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c) {
    write (1, &c, 1);
}

void    ft_putstr_non_printable(char *str) {
    int i = 0;
    char *hex_digits = "0123456789abcdef";

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else {
            ft_putchar('\\');
            ft_putchar(hex_digits[(unsigned char)str[i] / 16]);
            ft_putchar(hex_digits[(unsigned char)str[i] % 16]);
        }
        i++;
    }
}

int main() {
    char str[] = "Victor\vMaia\t\f42";

    printf(" Original string: \"%s\"\n", str);
    printf(" Modified string: \"");
    ft_putstr_non_printable(str);
    printf("\"");
}
#include <unistd.h>

void    *ft_print_memory(void *addr, unsigned int size);

void    ft_putchar(char c) {
    write (1, &c, 1);
}

void    ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str++);
    }
}

void    print_hex(unsigned char byte) {
    char    *hexdigits = "0123456789abcdef";
    ft_putchar(hexdigits[byte / 16]);
    ft_putchar(hexdigits[byte % 16]);
}

void    print_chars(unsigned char *mem, unsigned int size) {
    unsigned int i = 0;
    while (i < size) {
        if (mem[i] >= 32 && mem[i] <= 126) 
            ft_putchar(mem[i]);
        else
            ft_putchar('.');
        i++;
    }
}

void    *ft_print_memory(void *addr, unsigned int size) {
    unsigned int i;
    unsigned int j;
    unsigned char *mem = (unsigned char *)addr;

    i = 0;
    while (i < size) {
        j = 0;
        while (j < 16 && i + j < size) {
            print_hex(mem[i + j]);
            if (j % 2)
                ft_putchar(' ');
            j++;
        }
        while (j < 16) {
            ft_putstr("   ");
            if (j % 2)
                ft_putchar(' ');
            j++;
        }
        print_chars(&mem[i], (i + 16 < size) ? 16 : size - 1);
        ft_putchar('\n');
        i += 16;
    }
    return (addr);
}

int main() {
    char data[] = "42Lisboa\nHello World!\x01\x02\x03\x04\x05";
    char num[] = "0123456789";
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";

    ft_putstr("\n ");
    ft_print_memory(data, sizeof(data));
    ft_putstr("\n ");
    ft_print_memory(num, sizeof(num));
    ft_putstr("\n ");
    ft_print_memory(alpha, sizeof(alpha));
    ft_putchar('\n');
}
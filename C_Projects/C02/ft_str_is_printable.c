#include <stdio.h>

int ft_str_is_printable(char *str) {
    int i = 0;

    if (str[i] == 0)
        return (1);
    while (str[i] != '\0') {
        if ((str[i] >= 32 && str[i] <= 126))
            return (1);
        i++;
    }
    return (0);
}

int main() {
    char str[] = "Victor42#*&@¨$(!)";
    char str1[] = "\f\t\v";
    char str2[] = "";

    printf(" First string: '%s'- must return 1 -> %d\n", str, ft_str_is_printable(str));
    printf(" Second string: '%s'- must return 0 -> %d\n", str1, ft_str_is_printable(str1));
    printf(" Third string: '%s' (null) - must return 1 -> %d\n", str2, ft_str_is_printable(str2));
}
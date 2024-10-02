#include <stdio.h>

int ft_str_is_uppercase(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90) 
            return (0);
        i++;
    }
    return (1);
}

int main(void) {
    char str[] = "VICTOR";
    char str1[] = "victor";
    char str2[] = "VICTOR42";
    char str3[] = "";

    printf(" First string: '%s'- must return 1 -> %d\n", str, ft_str_is_uppercase(str));
    printf(" Second string: '%s'- must return 0 -> %d\n", str1, ft_str_is_uppercase(str1));
    printf(" Third string: '%s' - must return 0 -> %d\n", str2, ft_str_is_uppercase(str2));
    printf(" Fourth string: '%s' - must return 1 -> %d", str3, ft_str_is_uppercase(str3));
}
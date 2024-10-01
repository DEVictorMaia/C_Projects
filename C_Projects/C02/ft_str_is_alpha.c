#include <stdio.h>

int ft_str_is_alpha(char *str) {
    
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 && str[i] > 122))
            return (0);
        i++;
    }    
    return (1);
}

int main(void) {
    char str[] = "Victor";
    char str1[] = "42Victor";
    char str2[] = "";

    printf(" Primeira string deve retornar 1: %d\n", ft_str_is_alpha(str));
    printf(" Segunda string deve retornar 0: %d\n", ft_str_is_alpha(str1));
    printf(" Terceira string deve retornar 1: %d", ft_str_is_alpha(str2));
}
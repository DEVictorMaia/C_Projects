#include <stdio.h>

int ft_str_is_alpha(char *str) {
    
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
            return (0);
        i++;
    }    
    return (1);
}

int main(void) {
    char str[] = "Victor";
    char str1[] = "Victor42";
    char str2[] = "";

    printf(" First string: '%s' - must return 1 -> %d\n", str, ft_str_is_alpha(str));
    printf(" Second string: '%s' - must return 0 -> %d\n", str1, ft_str_is_alpha(str1));
    printf(" Third string: '%s' (NULL) - must return 1 -> %d", str2, ft_str_is_alpha(str2));
}
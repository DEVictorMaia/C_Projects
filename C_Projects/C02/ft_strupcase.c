#include <stdio.h>

char    *ft_strupcase(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main() {
    char str[] = "Victormaia";
    char str1[] = "victor42";

    printf(" Original strings:\n   %s\n   %s\n\n", str, str1);
    
    ft_strupcase(str);
    ft_strupcase(str1);

    printf(" Strings in uppercase:\n   %s\n   %s\n", str, str1);
}
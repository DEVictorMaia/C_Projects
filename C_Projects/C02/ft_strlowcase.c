#include <stdio.h>

char    *ft_strlowcase(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 95)
            str[i] += 32;
        i++;
    }
    return (str);
}

int main() {
    char str[] = "VICTORMAIA";
    char str1[] = "VICtor42";

    printf(" Original strings:\n   %s\n   %s\n\n", str, str1);
    
    ft_strlowcase(str);
    ft_strlowcase(str1);

    printf(" Strings in lowercase:\n   %s\n   %s\n", str, str1);
}
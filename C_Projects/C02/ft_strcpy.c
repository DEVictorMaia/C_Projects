#include <stdio.h>

char    *ft_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ptr);
}

int main() {
    char src[] = "Victor Hugo";
    char dest[20];
    printf("  The sorce string is '%s'\n", src);
    printf("  The destiny is still empty '%s'\n", dest);
    printf("  The function is being executed\n   ...\n   ...\n");
    ft_strcpy(dest, src);
    printf("  The destiny of the string is now '%s'\n", dest);
}
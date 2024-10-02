#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i = 0;
    unsigned int j = 0;

    while (src[i] != '\0' && i < n) {
        dest[j] = src[i];
        i++;
        j++;
    }
    while (j < n) {
        dest = '\0';
    }
    return (dest);
}
   
int main() {
    char src[] = "Victor Hugo";
    char dest[20];

    printf(" Original string :\n  %s\n", src);
    ft_strncpy(dest, src, 9);
    printf(" Copied string :\n  %s", dest);
}
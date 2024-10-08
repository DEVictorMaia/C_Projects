#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int c = 0;

    while (dest[i] != '\0')
        i++;
    while (src[c] != '\0' && c < nb)
    {
        dest[i] = src[c];
        i++;
        c++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char s1[] = "Victor ";
    char s2[] = "Hugo Maia";

    printf(" Strings before the concatenation:\n   %s;\n   %s;\n", s1, s2);
    printf(" Concatenating the first 4 letters: %s\n", ft_strncat(s1, s2, 4));
}
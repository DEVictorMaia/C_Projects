#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    char *end;

    end = dest;
    while (*end != '\0')
        end++;
    while (*src != '\0')
    {
        *end = *src;
        end++;
        src++;
    }
    *end = '\0';
    return (dest);
}

int main()
{
    char s1[] = "Victor ";
    char s2[] = "Maia";

    printf (" Sorce string: %s;\n", s1);
    printf (" Destination string before the concatenation: %s;\n", s2);
    printf (" Concatenation result: %s;\n", ft_strcat(s1, s2));
}
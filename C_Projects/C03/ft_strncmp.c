#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    if (i == n)
        return (0);
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
    char s1[] = "VictorMaia";
    char s2[] = "Victormaia";

    printf("\n Strings:\n   %s;\n   %s;\n", s1, s2);
    printf("\n Comparing 5 characters: %d;\n", ft_strncmp(s1, s2, 5));
    printf("\n Comparing 10 characters: %d;\n\n", ft_strncmp(s1, s2, 10));
}
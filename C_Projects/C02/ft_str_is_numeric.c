#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char str[] = "42";
    char str1[] = "Victor";
    char str2[] = "";

    printf(" First string: '%s' - must return 1 -> %d\n", str, ft_str_is_numeric(str));
    printf(" Second string: '%s' - must return 0 -> %d\n", str1, ft_str_is_numeric(str1));
    printf(" Third string: '%s' (NULL) - must return 1 -> %d", str2, ft_str_is_numeric(str2));
}
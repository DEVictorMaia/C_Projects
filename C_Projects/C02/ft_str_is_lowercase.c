#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 97 || str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char str[] = "victor";
    char str1[] = "Victor";
    char str2[] = "victor42";
    char str3[] = "";

    printf(" First string: '%s'- must return 1 -> %d\n", str, ft_str_is_lowercase(str));
    printf(" Second string: '%s'- must return 0 -> %d\n", str1, ft_str_is_lowercase(str1));
    printf(" Third string: '%s' - must return 0 -> %d\n", str2, ft_str_is_lowercase(str2));
    printf("Fourth string: '%s' - must return 1 -> %d", str3, ft_str_is_lowercase(str3));
}
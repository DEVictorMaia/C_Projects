#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    i = 0;

    while (str[i])
    {
        if ((i == 0) || ((str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i - 1] < '0' || str[i - 1] > '9')
                && (str[i] >= 'a' && str[i] <= 'z')))
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "hello, people of the world!!! 42words forty-two; twenty+one";

    printf(" Original string:\n   %s\n", str);
    printf ("Modified string:\n   %s\n", ft_strcapitalize(str));
}
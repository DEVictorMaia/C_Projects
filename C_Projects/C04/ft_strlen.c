#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int main()
{
    char str[] = "Hello World!!!";

    printf("\n Result: %d\n\n", ft_strlen(str));
}
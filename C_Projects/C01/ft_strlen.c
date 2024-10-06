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
    char str[] = "VictorHugo";

    printf("The length of '%s' must be %d", str, ft_strlen(str));
}
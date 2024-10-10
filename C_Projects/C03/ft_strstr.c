#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
        {
            j++;
        }
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    char str[] = "Hello people of the world!!!";
    char to_find[] = "of";

    printf("\n String:  %s;\n", str);
    printf("\n To find: %s;\n", to_find);
    printf("\n Result:  %s;\n\n", ft_strstr(str, to_find));
}
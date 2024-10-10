#include <stdio.h>

unsigned int    ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int src_len = ft_strlen(src);
    unsigned int dest_len = ft_strlen(dest);
    unsigned int d = dest_len;
    unsigned int s = 0;

    if (size <= dest_len)
        return (size + src_len);
    while (src[s] != '\0' && (d + 1) < size)
    {
        dest[d] = src[s];
        d++;
        s++;
    }
    dest = '\0';
    return (src_len + dest_len);
}

int main()
{
    char dest[50] = "Hello people of the world! ";
    char src[] = "I'm Victor Maia! ";
    unsigned int size = 50;

    printf ("\n Strings:\n   %s\n   %s\n", dest, src);

    ft_strlcat(dest, src, size);

    printf ("\n Result: %s\n", dest);
    printf ("\n Intended total size: %u\n\n", ft_strlcat(dest, src, size));
}
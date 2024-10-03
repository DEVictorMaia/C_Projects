#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int i;
    unsigned int src_len = 0;

    while (src[src_len] != '\0')
        src_len++;

    if (size > 0) {
        i = 0;
        while (i < (size - 1) && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (src_len);
}

int main() {
    char dest[20];
    unsigned int rtrn;

    // Test 1: String fits the buffer:
    rtrn = ft_strlcpy(dest, "VictorHugoMaia", sizeof(dest));
    printf(" Destination: '%s', return: %u\n", dest, rtrn);

    //Test 2: String larger than buffer:
    rtrn = ft_strlcpy(dest, "VictorHugoMaia", 9);
    printf( " Destination: '%s', return: %u\n", dest, rtrn);

    //Test 3: Small buffer:
    rtrn = ft_strlcpy(dest, "VictorHugoMaia", 5);
    printf(" Destination: '%s', return: %u\n", dest, rtrn);

    //Test 4: Buffer size is 0:
    rtrn = ft_strlcpy(dest, "VictorMaia", 0);
    printf(" Destination unchanged (size = 0), return: %u\n", rtrn);

    //Test 5: Empty string:
    rtrn = ft_strlcpy(dest, "", sizeof(dest));
    printf(" Destination: '%s', return: %u\n", dest, rtrn);
}
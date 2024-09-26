int ft_strlen(char *str) {
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

#include <stdio.h>

int main() {
    char str[] = "VictorHugo";
    printf("O comprimento de '%s' deve ser %d", str, ft_strlen(str));
}
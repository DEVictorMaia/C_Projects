#include <stdio.h>

int main(int argc, char **argv) {
    if (argc ==  3) {
        if (!(argv[1] < '0' && argv[1] > '9')) {

        }
        else {
            printf("É necessário um número entre 0 e 9");
        }
    }
    else {
        printf("É necessário apenas os seguintes argumentos:\n
                    Primeiro argumento")
    }
}
    /*nessa função quero fazer algo parecido com ft_swap
       oque consiste em trocar dois numeros passados como
       parâmetros para o programa*/
#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

 
int main(void)
{
    int n;
    int *nbr8 = &n;
    int **nbr7 = &nbr8;
    int ***nbr6 = &nbr7;
    int ****nbr5 = &nbr6;
    int *****nbr4 = &nbr5;
    int ******nbr3 = &nbr4;
    int *******nbr2 = &nbr3;
    int ********nbr1 = &nbr2;
    int *********nbr = &nbr1;
    n = 21;

    ft_ultimate_ft(nbr);
    printf("%d", n);
}
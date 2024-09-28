#include <unistd.h>

void ft_print_comb(int n, char *comb, int i, char start)
{
	if (i == n) {
		write (1, comb, n);
		if (comb[0] != '9' - n + 1) {
			write (1, ", ", 2);
		}
 	}
	while (start <= '9') {
		comb[i] = start;
		ft_print_comb (n, comb, i +1, start + 1);
		start++;
	}
}

void ft_print_combn(int n)
{
	char comb[10];

	if (n > 0 && n < 10) {
		ft_print_comb(n, comb, 0, '0');
	}
}

int main(void)
{
	ft_print_combn(6); //The number passed as parameter will be the lenght of the combination.
}
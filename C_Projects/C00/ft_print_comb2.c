#include <unistd.h>

void ft_putchar(char c) {
	write (1, &c, 1);
}

void ft_print_nb(int n) {
	ft_putchar (n / 10 + '0');
	ft_putchar (n % 10 + '0');
}

void ft_print_comb2(void) {
  int i = 0;
  int j;

  while (i <= 98) {
	j = i + 1;
	while (j <= 99) {
		ft_print_nb(i);
		write (1, " ", 1);
		ft_print_nb(j);
		if (i != 98 || j != 99)
			write (1, ", ", 2);
		j++;
	}
	i++;
  }
}

int main(void) {
	ft_print_comb2();
}
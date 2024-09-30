#include <stdio.h>

void    ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_rev_int_tab(int *tab, int size) {
    int i = 0;
    int j = (size - 1);

	while (i < j) {
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

int main(void) {
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	printf("Array original: {");
	while (i < size) {
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("}\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	printf("Array invertido: {");
	while (i < size) {
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("}");
}
/*
*/
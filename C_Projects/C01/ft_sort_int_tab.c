#include <stdio.h>

void    ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_sort_int_tab(int *tab, int size) {
    int i;
    int j;

    i = 0;
    while (i < size - 1) {
        j = 0;
        while (j < size - 1 - i) {
            if (tab[j] > tab[j + 1]) {
                ft_swap(&tab[j], &tab[j + 1]);
            }
            j++;
        }
        i++;
    }
}

int main(void) {
    int i = 0;
    int tab[] = {52, 3, 11, 7, 2};
    int size = 5;

    printf("Original array: {");
	while (i < size) {
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("}\n");

	ft_sort_int_tab(tab, size);

	i = 0;
	printf("Sorted array: {");
	while (i < size) {
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("}");
}
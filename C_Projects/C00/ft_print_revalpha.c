#include <unistd.h>

void ft_print_revalpha(void)
{
  write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int main(void)
{
  ft_print_revalpha();
}
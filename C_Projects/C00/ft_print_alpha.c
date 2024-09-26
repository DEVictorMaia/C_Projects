#include <unistd.h>

void ft_print_alpha(void)
{
  write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main(void)
{
  ft_print_alpha(); 
}

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";

	write(1, alpha, 26);
}
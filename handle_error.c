#include "includes/push_swap.h"
#include "libft/libft.h"

void	handle_error(t_stack* a, t_stack *b)
{
	ft_printf("free1\n");

	destroy_stack(a);
	destroy_stack(b);
	ft_printf("Error\n");
}

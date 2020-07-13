#include "includes/push_swap.h"
#include "libft/libft.h"

int main()
{
/*
	ft_printf("sa\n");
	ft_printf("sb\n");
	ft_printf("pa\n");
	ft_printf("rb\n");
	ft_printf("rra\n");
*/
	
	t_stack *stack_a = create_stack(10);
	t_stack *stack_b = create_stack(20);

	ft_printf("stack_a top is %d\n", stack_a->top);
	for (int i = 10; i > 0; i--)
		stack_push(stack_a, i);
	
	ft_printf("\nstack_a top is now %d\n", stack_a->top);
	for (int j = stack_a->top; j >= 0; j--)
		ft_printf("stack_a->arr[%d] is %d\n", j, stack_a->arr[j]);

	int r1 = is_sorted(stack_a);
	ft_printf("r1 is %d\n", r1);

	reverse_rotate_stack(stack_a);

	ft_printf("\nstack_a top is now %d\n", stack_a->top);
	for (int j = stack_a->top; j >= 0; j--)
		ft_printf("stack_a->arr[%d] is %d\n", j, stack_a->arr[j]);

	int r2 = is_sorted(stack_a);
	ft_printf("r2 is %d\n", r2);
/*	
	int ret = stack_pop(stack_a);
	ft_printf("\npopped off %d. top is now %d\n", ret, stack_a->top);

	ret = stack_pop(stack_a);
	ft_printf("\npopped off %d. top is now %d\n", ret, stack_a->top);
	
	ret = stack_pop(stack_a);
	ft_printf("\npopped off %d. top is now %d\n", ret, stack_a->top);
*/
	destroy_stack(stack_a);
	destroy_stack(stack_b);
	

	return (0);
}

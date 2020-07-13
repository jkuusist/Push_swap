#include "../includes/push_swap.h"
#include "../libft/libft.h"

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

	int r1 = has_duplicate(stack_a);
	ft_printf("r1 is %d\n", r1);

	
	ft_printf("stack_b top is %d\n", stack_b->top);
	for (int i = 10; i > 0; i--)
		stack_push(stack_b, i);
//	stack_push(stack_b, 3);
	stack_push(stack_b, -57);
	rotate_stack(stack_b);
	swap_elems(stack_b);
	stack_push(stack_b, -57);
	
	ft_printf("\nstack_a top is now %d\n", stack_b->top);
	for (int j = stack_b->top; j >= 0; j--)
		ft_printf("stack_b->arr[%d] is %d\n", j, stack_b->arr[j]);
	
	int r12 = has_duplicate(stack_b);
	ft_printf("r12 is %d\n", r12);

/*
	reverse_rotate_stack(stack_a);

	ft_printf("\nstack_a top is now %d\n", stack_a->top);
	for (int j = stack_a->top; j >= 0; j--)
		ft_printf("stack_a->arr[%d] is %d\n", j, stack_a->arr[j]);

	int r2 = is_sorted(stack_a);
	ft_printf("r2 is %d\n", r2);
*/
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

/*
	t_stack *huge = create_stack(500);
	for (int i = 499; i > 0; i--)
		stack_push(huge, i);

	stack_push(huge, 232);

	for (int j = huge->top; j >= 0; j--)
		ft_printf("huge[j] is %d\n", huge->arr[j]);

	int rh = has_duplicate(huge);

	ft_printf("rh is %d\n", rh);

	destroy_stack(huge);
*/
	return (0);
}

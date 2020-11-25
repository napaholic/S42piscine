#include <stdio.h>
#include <unistd.h>

int		main(int	ac, char	**av)
{
	void	*test;
	int		num = 97;
	char	*what;
	int		a1 = 39;
	int		a2 = 67;
	int		a3 = 3;
	int		nums[6] = {0, 1, 2,3,4,5};
	int		*ptr = NULL;
	
	test = &num;
	what = (char *)test;

	printf("%c\n", *what);
	a1 = a1^a2;
	a2 = a1^a2;
	a1 = a1^a2;
	printf("%d\n", a1);
	printf("%d\n", a2);
	a3 = ~a3;
	printf("%d\n", a3);
	printf("-----------ary & pointer");
	ptr = nums;
	printf("nums's value : %d\n", *nums);
	printf("nums's address : %p\n", nums);
	printf("ptr's address : %p\n", ptr);
	printf("nums[0]'s?' : %p", nums[0]);

}

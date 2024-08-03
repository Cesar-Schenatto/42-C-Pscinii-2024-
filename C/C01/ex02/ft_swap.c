/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
	{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main(void){
	int a = 25;
	int b = 69;
	int *ptr = &a;
	int *ptr1 = &b;
	ft_swap(ptr, ptr1);
	printf("%i \n", a);
	printf("%i", b);
	return 0;
}*/

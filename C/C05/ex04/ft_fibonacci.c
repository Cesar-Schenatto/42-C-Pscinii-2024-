#include <stdio.h>

int ft_fibonacci(int index)
{
int ret;

    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    ret = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    return (ret);
}

int main (void) {

    printf("%i ", ft_fibonacci(7));
    return 0;
}
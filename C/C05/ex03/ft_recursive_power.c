#include <stdio.h>

int  ft_recursive_power(int nb, int power) 
{
    int ret;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    ret = nb * ft_recursive_power(nb, power - 1);
    return (ret);
}

int main (void) {

    printf("%i ", ft_recursive_power(2,6));
    return 0;
}
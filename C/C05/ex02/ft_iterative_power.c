#include <stdio.h>

int ft_iterative_power(int nb, int power) 
{
    int ret;

    ret = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (power > 1)
    {
        ret *= nb;
        power--;
    }
    return (ret);
}
int main (void){
    printf("%i ", ft_iterative_power(2,30));
    return 0;
}
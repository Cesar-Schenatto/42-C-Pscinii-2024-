#include <stdio.h>

int ft_is_prime(int nb)
{
int i;

i = 2;
if (nb < 2)
    return (0);
while (i <= nb / 2)
{
    if(!(nb % i))
        return (0);
    else 
        i++;
}
    return (1);
}

int main (void) {

    printf("%i ", ft_is_prime(9));
    return 0;
}
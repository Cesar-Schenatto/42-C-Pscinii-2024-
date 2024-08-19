#include <stdio.h>

int ft_sqrt(int nb)
{
int r;

r = 1;
while(r * r >= nb){
    if(r * r == nb)
        return (r);
    else if(r == 46341)
        return (0);
    r++;


}
    return (r);
}

int main (void) {

    printf("%i ", ft_sqrt(9));
    return 0;
}
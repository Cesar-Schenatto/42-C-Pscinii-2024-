void    rec(int nbr, char *base, int size)
{
    unsigned int n;
    char        c;

    if (nbr < 0)
        {
            write(1, "-", 1);
            n = nbr * (-1);
        }
    else 
    {
        n = nbr;
    }
    if (n > (unsigned int)size)
    {        
        rec(n / size, base, size)
    }
    a = base[n % size]
    write(1, &a, 1);
}
int ver(char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        if (base[i] == base[i + 1] || base[i] == '-' || base[i] == '+')
        {
            return (0);
        }
        i++;
    }
    if (i < 2) 
    {
        return (0);
    }
    return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int s;

    s = 0;
    while(base[s])
    {
        s++;
    }
    rec(nbr, base, s);
}

int main (void){

    ft_putnbr_base(255, "01");
    ft_putnbr_base(255, "poneyvif");
    ft_putnbr_base(255, "0123456789");
    ft_putnbr_base(255, "0123456789abcdef")
    return 0;
}

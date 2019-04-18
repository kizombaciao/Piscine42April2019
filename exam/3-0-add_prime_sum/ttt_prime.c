
// recursion
void putnbr(int n)
{
    if (n > 9) {
        putnbr(n / 10);
    }
    
}

int is_prime(int n)
{
    int i;
    i = 2;
    
    while (i < n) {
        if (!(n % i++)) {
            return 0;
        }
    }
    return 1;
}
void add_prime(int n)
{
    int i;
    int count;
    count = 0;
    if (n == 1) {
        count = 0;
    }
    while (++i <= n) {
        if (is_prime(i)) {
            count += i;
        }
    }
    
    
}

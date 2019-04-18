
unsigned char   rb(unsigned char oct)
{
    unsigned char rv;
    int i;
    
    i = 8;
    rv = 0;
    
    while (i > 0) {
        rv = rv << 1 | oct & 1;
        oct = oct >> 1;
        i--;
    }
    return rv;
}

int main()
{
    unsigned char a = 1;
    rb(a);
}



int main()
{
    int vf[128];
    int i = 0;
    
    
    while (i < 128) {
        vf[i] = 0;
        i++;
    }
    
    while (*s2) {
        if (vf[(int)*s2] == 0) {
            vf[(int)*s2] = 1;
        }
        s2++;
    }
    
    while (*s1) {
        if (vf[(int)*s1] == 1) {
            write(1, s1, 1);
            vf[(int)*s1] = 0;
        }
        s1++;
    }
    
    
    
}

int strlen();

int isblank();
// 9 and 13

void ep(char *s)
{
    int len = strlen(s);
    
    while (len && isblank(s[len - 1])) {
        len--;
    }
    
    while (len && isblank(*s) && *s++) {
        len--;
    }
    
    while (len--) {
        
        if (!isblank(*s) || !isblank(*(s + 1)) && *(s + 1)) {
            write(1, s, 1);
        }
        s++;
    }
    
}

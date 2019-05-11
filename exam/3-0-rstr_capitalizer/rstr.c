#include <stdio.h>

int isblank(char c)
{
    return(c == ' ' || c == '\t');
}
int isupperalpha(char c)
{
    return(c >= 'A' && c <= 'Z');
}

char lowercase(char c)
{
    return((c - 'A') + 'a');
}

char uppercase(char c)
{
    return((c - 'a') + 'A');
}

// i think i got this for the Exam01!!!
void rstr(char *s)
{
    int i = 0, len;
    int flag = 1;

    // may be lower case everything first
    while (s[i]) {
        if (isupperalpha(s[i])) {
            s[i] = lowercase(s[i]);
        }
        i++;
    }
    len = i; // length of each string

    // NOT SURE IF BELOW WILL WORK, NOT TESTED YET!!!
    while (--len) { // step backward
    {
        while (isblank(s[len]))
            --len;
        if (!isblank(s[len]) && flag)
        {
            write(1, s[len], 1); 
            flag = 0; // clever use of flag for 1st encounter of char!!!   
        }
        // skip remaining chars of the word before a blank
        while (s[len] && !isblank(s[len])) { 
            len--;    
    }
}

int main(int ac, char **av)
{
    int i = 1;
    
    if (ac >= 1) {
        while (i < ac) {
            rstr(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

/*
 // remove any beginning blanks
 i = 0;
 while (isblank(s[i])) {
 i++;
 } // upon exit, current i is not blank
 

#include <stdio.h>
#include <unistd.h>

int ft_isblank(char c)
{
    return(c == ' ' || c == '\t');
}

// SUMMARY
// USE BELOW TRICK TO SKIP WHITE SPACES, VIA WHILE(FT_IS_BLANK())
// USE (S[I] && !FT_ISBLANK()) TO ENCOUNTER CHAR
// DIVIDE INTO FIRST ENCOUNTER VIA W_LEN FLAG COUNTER AND SUBSEQUENT ENCOUNTER
// FINALLY GO BACK USING W_LEN-- WITH I++ TO FINISH UP
void my_rostring(char *s)
{
    int i = 0, w_len = 0;
    
    while (s[i]) {
        while (ft_isblank(s[i])) {
            i++; // move forward index i if spaces
        }
        if (s[i] && !ft_isblank(s[i])) { // encounter of a char
            if (!w_len) { // if w_len = 0, first encounter, then enter if
                while (s[i] && !ft_isblank(s[i])) { // find word length
                    w_len++; // so we can remember the first word length
                    i++;
                }
            } else { // not first encounter of a word
                while (s[i] && !ft_isblank(s[i]) && write(1, &s[i], 1)) {
                    i++; // write that word
                }
                write(1, " ", 1); // put a space between word
            }
        }
    }
    // now upon finishing, go back and print the first word
    i = 0;
    while (ft_isblank(s[i])) {
        i++;
    }
    while (w_len--) { // until w_len = 0
        write(1, &s[i++], 1);
    }
}
int main(int ac, char **av)
{
    if (ac == 2) {
        my_rostring(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}

/*
 Write a program that takes a string and displays this string after rotating it
 one word to the left.
 
 Thus, the first word becomes the last, and others stay in the same order.
 
 A "word" is defined as a part of a string delimited either by spaces/tabs, or
 by the start/end of the string.
 
 Words will be separated by only one space in the output.
 
 If there's less than one argument, the program displays \n.
 
 Example:
 
 $>./rostring "abc   " | cat -e
 abc$
 $>
 $>./rostring "Que la      lumiere soit et la lumiere fut"
 la lumiere soit et la lumiere fut Que
 $>
 $>./rostring "     AkjhZ zLKIJz , 23y"
 zLKIJz , 23y AkjhZ
 $>
 $>./rostring | cat -e
 $
 $>


*/

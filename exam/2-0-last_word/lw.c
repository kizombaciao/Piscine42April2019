int isblank();

int main()
{
    // get to the end
    while (*s) {
        s++;
    }
    // remove spaces
    while (isblank) {
        s--;
    }
    // get to the front of the last word
    while (*s && !isblank) {
        s--;
    }
    // overshoot
    s++;
    // print last word
    while (*s && !isblank) {
        write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}

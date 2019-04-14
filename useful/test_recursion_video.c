
int fn()
{
    int i;

    i = 0;

    if (i <= 5)
    {
        i += 1;
        fn();
    }
    else
    {
        return (0);
    }
}

int main()
{
    fn();
    return (0);
}

// the above code does not work
// because the recursive calls to fn() gets i set back to 0 within its own local copy on the stack.
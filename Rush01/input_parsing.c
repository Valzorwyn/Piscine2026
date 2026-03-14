int is_num(char c);

int gridsize(int arr[46]);

int is_input_correct(int ac, char *av[])
{
    int all[46];
    int i;

    if (ac != 2)
        return (0);
    i = 0;
    while (i < 46)
        all[i++] = 0;
    i = 0;
    while (av[ac - 1][i])
    {
        if (is_num(av[ac - 1][i]))
            all[i] = av[ac - 1][i] - '0';
        else if (av[ac - 1][i] != ' ')
            return (0);
        i++;
    }
    return (gridsize(all));
}

int gridsize(int arr[46])
{
    int i = 0;
    int size;
    while (i < 46 && arr[i])
        i++;
    size = 9;
    while (size >= 4)
    {
        if (i % size == 0)
            return (size);
        else
            return (0);
        size--;
    }
}

int is_num(char c)
{
    if (c < '0' || c > '9')
        return (0);
    else
        return (1);
}
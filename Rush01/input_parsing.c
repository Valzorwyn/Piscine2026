#include <stdio.h>

int is_num(char c);

int gridsize(int arr[46]);

int check_format(char *arr);

int is_input_correct(int ac, char *av[])
{
    int all[46];
    int i;
    int a;

    if (ac != 2 || check_format(av[ac - 1]) != 1)
        return (0);
    i = 0;
    while (i < 46)
        all[i++] = 0;
    i = 0;
    a = 0;
    while (av[ac - 1][i])
    {
        if (is_num(av[ac - 1][i]))
            all[a++] = av[ac - 1][i] - '0';
        else if (av[ac - 1][i] != ' ')
            return (0);
        i++;
    }
    return (gridsize(all));
}

int check_format(char *arr)
{
    int i;

    i = 0;
    if (is_num(arr[0]) != 1)
        return (0);
    while (arr[i])
    {
        if ((i + 1) % 2 == 0)
            if (arr[i] != ' ')
                return (0);
        i++;
    }
    if (is_num(arr[i - 1]))
        return (1);
    return (0);
}

int gridsize(int arr[46])
{
    int i;
    int j;
    int size;

    i = 0;
    j = 0;
    while (i < 46 && arr[i])
        i++;
    size = 9;
    while (size >= 4)
    {
        if ((i / 4) % size == 0 && (i % 4) == 0)
        {
            while (j < 46)
                if (arr[j++] > size)
                    return (0);
            return (size);
        }
        size--;
    }
    return (0);
}

int is_num(char c)
{
    if (c < '1' || c > '9')
        return (0);
    else
        return (1);
}

int main(int argc, char *argv[])
{
    printf("\n%d", is_input_correct(argc, argv));
}
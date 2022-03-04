

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char tmp;

    i = 0;
    j = 0;
    while (str[i])
        i++;
    i--;
    while (i > j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i--;
        j++;
    }
    return (str);
}
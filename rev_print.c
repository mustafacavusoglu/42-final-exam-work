#include<unistd.h>

char *ft_rev_print (char *str)
{
    int len;


    while (str[len] != '\0')
    {
        len++;
    }

    len = len - 1;
    while (len >=0)
    {
        write(1, &str[len], 1);
        len--;
    }
    return (str);
    
}


int main(int argc, char  *argv[])
{
    if (argc > 1)
    {
       ft_rev_print(argv[1]);
    }
    return 0;
}

#include <unistd.h>

int main(int argc, char  *argv[])
{
    int i;

    if (argc > 1)
    {
        argc = argc -1;
        i = 0;
        while (argv[argc][i])
        {   
            write(1, &argv[argc][i++], 1);
        }
    }
    return 0;
}

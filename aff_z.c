#include <unistd.h>

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
    write(1, "z\n", 2);
    return 0;
}

#include <unistd.h>
int main(int argc, char const *argv[])
{
    write(1,"0123456789\n",11);
    return 0;
}

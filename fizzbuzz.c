#include <unistd.h>

void f_write_numbers(int n)
{
    if (n > 9)
        f_write_numbers(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}
int main(int argc, char const *argv[])
{
    int n ;

    n = 0;

    while (n <= 100)
    {
        if (n % 3 == 0 && n % 5 == 0 )
        {
            write(1,"FizzBuzz",8);
        } 
        else if (n % 3 == 0)
        {
            write(1,"Fizz",4);
        }
        else if (n % 5 == 0)
        {
            write(1,"Buzz",4);
        }
        else
        {
            f_write_numbers(n);
        }
        write(1,"\n",1);
        n++;
    }
    
    return 0;
}

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char word;

    if (ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                word = av[1][i] - 'a' + 1;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                word = av[1][i] - 'A' + 1;
            else
                word = 1;
            while(word--)
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
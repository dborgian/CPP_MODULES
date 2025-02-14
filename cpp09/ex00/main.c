

#define FREE             'f'
#define NOT_FREE   'n'
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_schedule(char week);

int    main(int ac, char **av)
{
    char     *nxt_7d = NULL;
    int         day;

    nxt_7d = malloc(7 * sizeof(char));
    if (!nxt_7d)
    {
        write(2, "malloc ko", 9);
        return (1);
    }
    memset(nxt_7d, FREE, 7);  // Inizializza tutti gli elementi di nxt_7d a FREE
    day = atoi(av[1]);
    //ft_schedule(nxt_7d[day]);
    if (nxt_7d[day] == FREE)
        printf("Ok, ci sono!");
    else
        printf("Nope, sorry");
    return (0);
}


// syntax

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int random_num = (rand() % 6) + 1;

    printf("%d", random_num);

    return 0;
}
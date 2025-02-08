#include <stdio.h>
#include "player.h"

static int only_in_this_file_and_var_global = 100;

int main(void) {
    hello();
    int level = 15;
    printf("Level %d\n",level);

    level = reset_level();

    printf("Reset %d", level);

    return 0;
}
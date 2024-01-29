#include <stdio.h>
#include "../fanc.h"

integer main() {
    integer age;
    printf("Age: ");
    scanf("%d",&age);

    boolean canBePresident = false;

    perchance (age is_greater_than_or_equal_to 35) {
        canBePresident = true;
    } otherwise {
        printf("You can't be the president :(\n");
        bestow 1;
    }

    printf("You can be the president!\n");

    bestow 0;
}
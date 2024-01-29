#include <stdio.h>

int main() {
    int age;
    printf("Age: ");
    scanf("%d",&age);

    bool canBePresident = false;

    if (age >= 35) {
        canBePresident = true;
    } else {
        printf("You can't be the president :(\n");
        return 1;
    }

    printf("You can be the president!\n");

    return 0;
}
# Fan-C
Look at this code to determine if someone could be the president:
```cpp
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
```
Isn't it hard to read? Well that's where Fan-C comes in. With Fan-C the code now looks like this:
```cpp
#include <stdio.h>
#include "fanc.h"

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
```
As you can see, words like "perchance" and "bestow" make the code much easier to read and understand.
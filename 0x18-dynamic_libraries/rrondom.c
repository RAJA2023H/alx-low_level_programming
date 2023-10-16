#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int counter = 0;
// 9 8 10 24 75 9
// 8 7 9 23 74 8
int rand()
{
    srandom(time(NULL));
    counter++;
    if (counter == 1)
        return 8;
    else if (counter == 2)
        return 8;
    else if (counter == 3)
        return 7;
    else if (counter == 4)
        return 9;
    else if (counter == 5)
        return 23;
    else if (counter == 6)
        return 74;
    else
    {
        return random();
    }
}

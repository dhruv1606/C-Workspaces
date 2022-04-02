#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10, x, y;
    int *int_pointer;
    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i, *int_pointer = %d, int_pointer = %d", count, x, *int_pointer, int_pointer);

    return 0;
}

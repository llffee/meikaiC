#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("sizeof 1: %u\n", (unsigned)sizeof(1));
    printf("sizeof (unsigned)-1: %u\n", (unsigned)sizeof((unsigned)-1));
    printf("sizeof n+2: %u\n", (unsigned)sizeof(n+2));

    printf("sizeof+1: %u\n", (unsigned)sizeof(+1));
    printf("sizeof (double)-1: %u\n", (unsigned)sizeof((double)-1));
    printf("sizeof(n+2): %u\n", (unsigned)sizeof(n+2));

    printf("sizeof-1: %u\n", (unsigned)sizeof(-1));
    printf("sizeof ((double)-1): %u\n", (unsigned)sizeof(((double)-1)));
    printf("sizeof(n+2.0): %u\n", (unsigned)sizeof(n+2.0));


    return 0;
}

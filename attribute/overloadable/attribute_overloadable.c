
#include <stdio.h>

__attribute__((__overloadable__)) void print(int i)
{
    printf("%i\n", i);

    return;
}

__attribute__((__overloadable__)) void print(char *s)
{
    printf("%s\n", s);

    return;
}

int main(void)
{
    print(1);

    print("s");

    return 0;
}

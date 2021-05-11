
#include <stdio.h>
#include <stdlib.h>

#include <stdnoreturn.h> /* #define noreturn _Noreturn */

noreturn void test_Noreturn(void)
{
    printf("%s\n", __FUNCTION__);

    exit(0);
}

int main(void)
{
    printf("%s\n", __FUNCTION__);

    test_Noreturn();

    printf("%s\n", __FUNCTION__);

    return 0;
}
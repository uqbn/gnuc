
#include <stdio.h>

extern void test_visibility(void) __attribute__((__visibility__("hidden")));

int main(void)
{
    test_visibility();

    return 0;
}
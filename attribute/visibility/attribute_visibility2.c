
#include <stdio.h>

void test_visibility(void) __attribute__((__visibility__("hidden")));

void test_visibility(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

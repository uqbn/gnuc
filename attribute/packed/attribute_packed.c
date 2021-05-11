
#include <stdio.h>

typedef struct
{
    char c1_c;
    int i_i;
    char c2_c;
} Test1_t;

typedef struct
{
    char c1_c;
    int i_i;
    char c2_c;
} __attribute__((__packed__)) Test2_t;

int main(void)
{
    printf("Test1_t = %zu\n", sizeof(Test1_t));

    printf("Test2_t = %zu\n", sizeof(Test2_t));

    return 0;
}
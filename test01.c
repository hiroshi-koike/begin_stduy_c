#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int int_a = 123456789;
    int int_b = 0;
    int * int_p = 0;
    char moji[20];

    memset(&moji[0],0x00,sizeof(moji));
    strcpy(&moji[0], "i'm a programmer");

    int_p = &int_a;
    int_b = *int_p;
    printf("%d\n", int_a);
    printf("%d\n", int_b);
    printf("%ld\n", sizeof(int));
}

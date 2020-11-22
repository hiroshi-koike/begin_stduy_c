#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    char moji[20];

    memset(&moji[0],0x00,sizeof(moji));
    strcpy(&moji[0], "ソフト");
    printf("%s\n", moji);
}

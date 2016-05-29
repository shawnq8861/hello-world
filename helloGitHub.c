#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2) {
        printf("Hello GitHub from %s", argv[1]);
    }
    else if (argc > 2) {
        printf("usage:  enter one name after program name...\n");
    }
    else {
        printf("Hello World!\n");
    }
    return 0;
}


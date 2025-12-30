#define NOBUILD_IMPLEMENTATION
#include "nobuild.h"

#define CFLAGS "-Wall", "-Wextra", "-std=c11", "-pedantic", "-ggdb", "-O2"

int main(int argc, char** argv)
{
    GO_REBUILD_URSELF(argc, argv);
    CMD("cc", CFLAGS, "-o", "./build/main", "./src/main.c");

    if(argc > 1)
    {
        if(strcmp(argv[1], "run") == 0)
        {
            CMD("./build/main");
        } else {
            PANIC("Unknown command: %s\n", argv[1]);
        }
    }

    return 0;
}
// Convenient way of not writing Makefile
// and execute make in command line with flags
// root:$ CFLAGS = "-Wall -g" make

#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %d miles away.\n", distance);

    return 0;
}

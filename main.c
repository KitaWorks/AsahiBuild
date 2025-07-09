#include <stdio.h>

#include "version.h"

int main(int argv, char *argc[]) {
    char *filename = argc[1];

    if (!argc[1]) {
        printf("AsahiBuild Version %s\n", VERSION);
        printf("Usage:\n");
        printf("new\t-\tCreate project\n");
        printf("build\t-\tBuild project\n");
    }

    return 0;
}
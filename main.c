#include <stdio.h>
#include <string.h>

#include "version.h"

int main(int argv, char *argc[]) {
    char *filename = argc[1];

    if (!argc[1]) {
        printf("AsahiBuild Version %s\n", VERSION);
        printf(" %s <action>\n", argc[0]);
        printf("Usage:\n");
        printf("new\t-\tCreate project\n");
        printf("build\t-\tBuild project\n");
        printf("config\t-\tConfigure project options");
    }

    if (strcmp(argc[1], "new") == 0) {
        char *project_name = argc[2];
        // TODO: new project
    } else if (strcmp(argc[1], "build") == 0) {
        // TODO: build project
    } else if (strcmp(argc[1], "config") == 0) {
        // TODO: config
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

#include "version.h"

int main(int argc, char *argv[]) {
  char *filename = argv[1];

  if (!argv[1]) {
    printf("AsahiBuild Version %s\n", VERSION);
    printf(" %s <action>\n", argv[0]);
    printf("Usage:\n");
    printf("new\t-\tCreate project\n");
    printf("build\t-\tBuild project\n");
    printf("config\t-\tConfigure project options\n");
    return 1;
  }

  if (strcmp(argv[1], "new") == 0) {
    if (argc < 3) {
      printf("Project name required.\n");
      return 1;
    }
    char *project_name = argv[2];
    // TODO: new project
  } else if (strcmp(argv[1], "build") == 0) {
    // TODO: build project
  } else if (strcmp(argv[1], "config") == 0) {
    // TODO: config
  } else {
    printf("Action not exist.\n");
  }

  return 0;
}

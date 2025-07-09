#include <stdio.h>
#include <string.h>

#include "version.h"


/* ACTIONS */

int do_new_project(const char *name) {
  // TODO: new project
  return 0;
}

int do_build() {
  // TODO: build project
  return 0;
}

int do_get_config(const char *key) {
  // TODO: get config
  return 0;
}

int do_set_config(const char *key, const char *value) {
  // TODO: set config
  return 0;
}


/* MAIN PROCEDURE */

void print_help(const char *program_name) {
  printf("AsahiBuild version %s\n", VERSION);
  printf("Usage: %s <action> ...\n", program_name);
  printf("action:\n%s",
    "  new <name>\n"
    "    Create a project using name <name>\n"
    "  build\n"
    "    Build current project\n"
    "  config get <key>\n"
    "    Get project option\n"
    "  config set <key> <value>\n"
    "    Set project option\n"
  );
}


#define NEXT_OPTION(argc, argv) (argc > 0? (--argc, ++argv, *(argv - 1)): NULL)

int main(int argc, char *argv[]) {
  const char *program_name = NEXT_OPTION(argc, argv);

  const char *action = NEXT_OPTION(argc, argv);
  if (!action) {
    puts("An action is needed.");
    print_help(program_name);
    return 1;
  }

  if (strcmp(action, "new") == 0) {
    const char *project_name = NEXT_OPTION(argc, argv);
    if (!project_name) {
      puts("A project name is required.");
      print_help(program_name);
      return 1;
    }
    return do_new_project(project_name);
  } else if (strcmp(action, "build") == 0) {
    return do_build();
  } else if (strcmp(action, "config") == 0) {
    const char *config_action = NEXT_OPTION(argc, argv);
    if (!config_action) {
      puts("A config operation is required.");
      print_help(program_name);
      return 1;
    }
    if (strcmp(config_action, "get") == 0) {
      const char *key = NEXT_OPTION(argc, argv);
      if (!key) {
        puts("A key is required.");
        print_help(program_name);
        return 1;
      }
      return do_get_config(key);
    } else if (strcmp(config_action, "set") == 0) {
      const char *key = NEXT_OPTION(argc, argv);
      const char *value = NEXT_OPTION(argc, argv);
      if (!key || !value) {
        puts("A key with a value is required.");
        print_help(program_name);
        return 1;
      }
      return do_set_config(key, value);
    } else {
      puts("Invalid config operation.");
      print_help(program_name);
      return 1;
    }
  } else {
    puts("Unknown action.");
    print_help(program_name);
  }

  return 1;
}


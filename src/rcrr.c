#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE *cocaine;
  if (strcmp(argv[1], "-rne" ) == 0) {
    cocaine = fopen(argv[2], "r");
    if (cocaine == NULL) {
      printf("File not found, check for typos \n");
      return -1;
    } else {
    fclose(cocaine);
    }
  rename(argv[2], argv[3]);
  } else if (strcmp(argv[1], "-rm") == 0) {
cocaine = fopen(argv[2], "r");
    if (cocaine == NULL) {
      printf("File not found, I guess my job is already done ¯\\_(0w0)_/¯\n");
      return -1;
    } else {
      fclose(cocaine);
    }
    remove(argv[2]);
  } else if (strcmp(argv[1], "-h") == 0) {
    printf("SYNTAX: rcrr (-rne, -rm, -h) FILE FILE2(only if you're renaming) \n -rne: Renames a file \n -rm: Removes a file \n -h: Displays this menu \n If you have any problems report them on Github.\n");
  } else {
      printf("SYNTAX: rcrr (-rne, -rm, -h) FILE FILE2(only if you're renaming) \n -rne: Renames a file \n -rm: Removes a file \n -h: Displays this menu \n If you have any problems report them on Github.\n");
  }
}


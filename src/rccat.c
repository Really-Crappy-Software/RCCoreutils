#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE *bazinga;
  // I should rewatch the big bang theory
  if (strcmp(argv[1], "-w") == 0) {
    bazinga = fopen(argv[2], "w");
  // Hey this is quite easy, and its probably going to be good. wait if it's this easy maybe it's crap
fprintf(bazinga, argv[3]);
  fclose(bazinga);
  }  else if (strcmp(argv[1], "-a") == 0) {
    bazinga = fopen(argv[2], "a");
  // Hey this is quite easy, and its probably going to be good. wait if it's this easy maybe it's crap
fprintf(bazinga, argv[3]);
  fclose(bazinga);
  }   else if (strcmp(argv[1], "-r") == 0) {
    bazinga = fopen(argv[2], "r");
    char myString[10000];
     fgets(myString, 10000, bazinga);
    printf("%s\n", myString);
  }  else if (strcmp(argv[2], "-h") == 0) {
      printf("SYNTAX: rccat -w/-a/-r/-h FILE TEXT \n -w: Writes to a file (overwrites the text already in that file) \n -a: appends text to a file \n -r: displays the file contents \n -h displays this menu \n if you encounter any bugs please report it on Github.");
  } else {
      printf("SYNTAX: rccat -w/-a/-r/-h FILE TEXT \n -w: Writes to a file (overwrites the text already in that file) \n -a: appends text to a file \n -r: displays the file contents \n -h displays this menu \n if you encounter any bugs please report it on Github.");
  }
}

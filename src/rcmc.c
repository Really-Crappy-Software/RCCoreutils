#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char* argv[]) {
struct stat steven;
FILE *twitter;
// The joke is that people are moving from twitter XD
FILE *aintea;
//Thank you Aintea for your support
if (strcmp(argv[1], "-mv") == 0) {
  aintea = fopen(argv[2], "r");
  if (aintea == NULL) {
printf("File not found\n");
    return 131024;
  }
rename(argv[2], argv[3]);
} else if (strcmp(argv[1], "-cp") == 0) {
aintea = fopen(argv[2], "r");
 if (aintea == NULL) {
printf("File not found\n");
    return 131024;
  }
twitter = fopen(argv[3], "w");
stat(argv[2], &steven);
long miles = steven.st_size;
char data[miles];
fread(data, 1, miles, aintea);
fwrite(data, 1, miles, twitter);
} else if (strcmp(argv[1], "-h") == 0) {
printf("SYNTAX: rcmc (-mv, -cp, -h) FILE LOCATION \n -mv: Moves a file \n -cp: Copies a file \n -h: Displays this menu \n If you have any problems report them on Github.\n");
  } else {
printf("SYNTAX: rcmc (-mv, -cp, -h) FILE LOCATION \n -mv: Moves a file \n -cp: Copies a file \n -h: Displays this menu \n If you have any problems report them on Github.\n");
  }
}

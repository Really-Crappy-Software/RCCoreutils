#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
//   _ __ ___ ___
//  | '__/ __/ __|
//  | | | (__\__ \_
//  |_|  \___|___(_) Software done worse.
//

int main(int argc, char* argv[]) {
FILE *pebis;
if (strcmp(argv[1], "-t") == 0) {
pebis = fopen(argv[2], "w");
fclose(pebis);
} else if (strcmp(argv[1], "-d") == 0) {
mkdir(argv[2], S_IRWXU);
} else if (strcmp(argv[1], "-h") == 0) {
        printf("SYNTAX: rcmat (-d -t -h) location\n -d: makes a directory \n -t: makes a file \n -h: Displays this menu\n -\n if you encounter any bugs please report it on Github.\n");
    } else  {
        printf("SYNTAX: rcmat (-d -t -h) location\n -d: makes a directory \n -t: makes a file \n -h: Displays this menu\n -\n if you encounter any bugs please report it on Github.\n");
    }
}

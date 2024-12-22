#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  if (strcmp(argv[1], "-h") == 0) {
printf("SYNTAX: rckill PID SIGNAL-LEVEl \n -h: displays this menu \n If you have any issues report them on Github. \n");
  } 
char *arg = argv[1];
  char *arg2 = argv[2];
  int signum = atoi(arg2);
  int pidnum = atoi(arg);
  char input;
  printf("are you sure? you want to kill process %d at signal %d (y/n)\n", pidnum, signum);
scanf("%c", &input);
if (input=='y') {
  kill(pidnum, signum);
  } else {
    return 0;
  }
}

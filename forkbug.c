#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatal(char *error_msg) {
   char buffer[100];

   strcat(buffer, "[!!]Fatal error ");
   strcat(buffer, error_msg);

   exit(-1);
}

void main() {
   int i=0;
   int pid = fork();

   printf("This is the parent process.\n");

   while(1) {
      if(pid == -1)
         fatal("in main() when forking.\n");
      if(pid == 0) {
         printf("This is child process #%d\n", i);
         i++;
      } else {
         int status;
         (void) waitpid(pid, &status, 0);
      }
   }
}

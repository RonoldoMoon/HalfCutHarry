#include <stdio.h>
#include <sys/types.h>
#include <regex.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()  {

  regex_t*    CompiledThing;
  char*       Expression     = "^harry";
  int         fd;
  char        FileBuff          [512];
  char        ExBuff            [512];
  regmatch_t* MyMatch;                 //pointer???
  /*
  if ( ( fd = open("pop.txt", O_CREAT | O_RDONLY, S_IRWXU | S_IRWXG | S_IRWXO) ) == -1 )  {
  
    puts("open(): problem opening/creating file"); // should be perror
    exit(1);
  }
  
  if ( read(fd, FileBuff, 512) < 1 )  {
  
    puts("read(): nothing to read????");
    exit(1);
  }
  */
  regcomp(CompiledThing, Expression, (int)NULL);
  
  gets(FileBuff);
  
  if ( regexec(CompiledThing, FileBuff, 1, MyMatch, (int)NULL) == 0 )  {
  
    puts("yes");
  }
  
  else puts("no");
  
  return 0;
}
  
  
  
  

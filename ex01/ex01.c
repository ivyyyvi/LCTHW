/*
* todo:
*   1. Try other printf funcions
*   2. To answer the difference between * and []. 
*     e.g. char* vs char[]
*
*/

#include <stdio.h>
#include <stdarg.h>

/* This is a comment. */
int main (int argc, char *argv[])
{ // { means the beginning of a block
  int distance = 100; // this is a statement.
  int retVal = 0;

  //FILE * stream = NULL;

  // this is also a comment
  //int
  //printf(const char * restrict format, ...);
  retVal =
    printf ("You are %d miles away.\n", distance);
  printf ("Return value of printf is %d\n", retVal);

  //int
  //fprintf(FILE * restrict stream, const char * restrict format, ...);
  //retVal =
    //fprintf(stream, "This is printed by fprintf %d", 9);
/*
  int
  sprintf(char * restrict str, const char * restrict format, ...);

  int
  snprintf(char * restrict str, size_t size, const char * restrict format, ...);

  int
  asprintf(char **ret, const char *format, ...);

  int
  printf(int fd, const char * restrict format, ...);


  int
  vprintf(const char * restrict format, va_list ap);

  int
  vfprintf(FILE * restrict stream, const char * restrict format, va_list ap);

  int
  vsprintf(char * restrict str, const char * restrict format, va_list ap);

  int
  vsnprintf(char * restrict str, size_t size, const char * restrict format, va_list ap);

  int
  vasprintf(char **ret, const char *format, va_list ap);

  int
  vdprintf(int fd, const char * restrict format, va_list ap);
*/

  return 0;
}
// int argc is argument count // char *argv[] is an array of char * string for the arguments
// the OS loads this program and runs the function named "main"

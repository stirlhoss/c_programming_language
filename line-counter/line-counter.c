#include <stdio.h>

/* count lines in input */
/* int main () */
/* { */
/*   int c, nl; */

/*   nl = 0; */
/*   while ((c = getchar()) != EOF) */
/*     if (c == '\n') */
/*       ++nl; */
/*   printf("%d\n", nl); */
/* } */

/* count blanks, tabs, and newlines */
int main (int argc, char *argv[])
{
  if (argc < 2) {
    printf("Please provide a filename as an argument.\n");
    return 1;
  }
  int c, nl, t, b;
  nl = 0;
  t = 0;
  b = 0;

  char *filename = argv[1];

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror("Error opening file");
    return 1;
  }
    
  while ((c = fgetc(fp)) != EOF)
    if (c == '\t')
      ++t;
    else if (c == ' ')
      ++b;
    else if (c == '\n')
      ++nl;
  printf("There are:\n %d blanks\n %d tabs\n and %d lines\n", b, t, nl);
  fclose(fp);
  return 0;
}

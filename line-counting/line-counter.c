#include "stdio.h"

/*count lines in input */

int main() {
  int c, nl, sp, tab;

  nl = 0;
  sp = 0;
  tab = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n') {
      ++nl;
    }
    else if (c == ' ') {
      ++sp;
    } else if (c == '\t') {
      ++tab;
    }

  printf("%d\n%d\n%d\n", nl, sp, tab);
}

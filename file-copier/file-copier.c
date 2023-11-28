#include <stdio.h>

/* copy input to output; 1st version */

/* int main() { */
/*   int c; */

/*   c = getchar(); */
/*   while (c != EOF) { */
/*     putchar(c); */
/*     c = getchar(); */
/*   } */
/* } */

/* copy input ot output; 2nd version */

int main() {
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}

/* print EOF */

/* int main() { printf("%d", EOF); } */

/* test getchar() boolean evalutation */

/* int main() { printf("%d", getchar() != EOF); } */

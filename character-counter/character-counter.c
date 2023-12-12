#include <stdio.h>

/* count characters in input; 1st version */

/* int main() { */
/*   long n; */

/*   n = 0; */
/*   while (getchar() != EOF) */
/*     ++n; */
/*   printf("%ld\n", n); */
/* } */

int main() {
  double n;

  for (n = 0; getchar() != EOF; n++)
    ;
  printf("%.0f\n", n);
}

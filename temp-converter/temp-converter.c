#include <stdio.h>

/* Only one of these will work at a time!! */

/* Fahrenheit to Celsius */
int main() {
  float fahr, celsius;
  int lower, upper, step;

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size*/

  fahr = UPPER;
  printf("Temperature Conversions\n");
  printf(" F     C\n");
  while (fahr >= LOWER) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr - STEP;
  }
}

/* Celsius to Fahrenheit */
/* int main() { */
/*   int celsius, fahr; */
/*   int lower, upper, step; */

/*   lower = -20; */
/*   upper = 50; */
/*   step = 5; */

/*   celsius = lower; */
/*   printf("Temperature Conversions\n"); */
/*   printf(" C      F\n"); */
/*   while (celsius <= upper) { */
/*     fahr = (celsius * 9.0 / 5.0) + 32; */
/*     printf("%3d %6d\n", celsius, fahr); */
/*     celsius = celsius + step; */
/*   } */
/* } */

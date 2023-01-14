#include <stdio.h>

void fahrenheit_while();
void celsius_while();
void celsius_for_reverse();
void fahrenheit_for_reverse();

#define LOWER 0   /* LOWER limit of temp table */
#define UPPER 300 /* UPPER limit */
#define STEP 20   /* STEP size */

void fahrenheit_for_reverse() {
  float fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%6.0f\t%3.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

void fahrenheit_while() {
  float fahr, celsius_while;

  fahr = LOWER;
  printf("fahrenheit_while | celsius_while\n");
  while (fahr <= UPPER) {
    celsius_while = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius_while);
    fahr = fahr + STEP;
  }
}

void celsius_while() {
  float fahr, celsius_while;

  celsius_while = LOWER;
  while (celsius_while <= UPPER) {
    fahr = celsius_while * (9.0 / 5.0) + 32;
    printf("%6.0f\t%3.1f\n", celsius_while, fahr);
    celsius_while = celsius_while + STEP;
  }
}

int main() {
  // fahrenheit_while();
  fahrenheit_for_reverse();
  celsius_while();
}

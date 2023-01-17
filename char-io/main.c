#include <stdio.h>

int main() {
  int c;
  double nc;

  c = getchar() != EOF;
  putchar(c);
  for (nc = 0; c; ++nc)
    ;

  printf("%1d\n", c);
  printf("%.0f\n", nc);
}

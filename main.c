#include <stdio.h>
#include "light-rng.h"

int main() {
  printf("Enter Number of Digits: ");
  int digits;
  scanf("%d", digits);
  int seed = randomizer(digits);
  return srand(seed) % pow(10, digits);
}

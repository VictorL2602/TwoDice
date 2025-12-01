#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // create array for sums 0-12
  int counts[13] = {0};

  // random seed generator
  srand(time(NULL));

  // simulation loop with 50k throws
  for (int i = 0; i < 50000; i++) {
    int die1 = rand() % 6 + 1; // random number 1–6
    int die2 = rand() % 6 + 1;
    int sum = die1 + die2;
    counts[sum]++; // increment count for that sum
  }

  for (int s = 2; s <= 12; s++) {
    printf("%d: %d\n", s, counts[s]);
  }

  return 0;
}
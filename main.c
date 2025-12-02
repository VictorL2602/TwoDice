#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // create array for sums 0-12
  int counts[13] = {0};

  // random seed generator based on time
  srand(time(NULL));

  // simulation loop with 50k throws
  for (int i = 0; i < 50000; i++) { // repeat 50k throws
    int die1 = rand() % 6 + 1;      // roll first dice 1 to 6
    int die2 = rand() % 6 + 1;      // roll second dice 1 to 6
    int sum = die1 + die2;          // calculate sum of both dice
    counts[sum]++;                  // increment count for that sum
  }

  for (int s = 2; s <= 12; s++) {     // loop through all valid sums
    printf("%d: %d\n", s, counts[s]); // print sum and number of occurances
  }

  return 0;
}
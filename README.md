# Dice Sum Simulation
This program simulates rolling two six-sided dice 50,000 times and records how often each possible sum (2–12) occurs.  
It uses an array to count the occurrences of each sum and prints the final distribution.

## How It Works
1. The program seeds the random number generator using the current time.  
2. It rolls two dice 50,000 times using rand() % 6 + 1.
3. The sum of each roll is recorded in the counts array.
4. After all rolls, the program prints how many times each sum appeared.

## Expected Results
Some sums are more likely than others.  
For example, "7" is the most common because it has the most dice combinations (6 ways).  
Sums near 2 and 12 are the least common.

## Example output:
2: 1427
3: 2735
4: 4259
5: 5502
6: 6789
7: 8359
8: 6808
9: 5591
10: 4304
11: 2817
12: 1409


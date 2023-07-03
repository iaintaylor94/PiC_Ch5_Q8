#include <stdio.h>

int main(void) {

  int n, number, triangularNumber, counter;

  // Get user input <numTries>
  int numTries;
  printf ("Enter number of tries: ");
  scanf ("%i", &numTries);

  for (counter = 1; counter <= numTries; counter++) {

      printf ("What triangular number do you want? ");
      scanf ("%i", &number);

      triangularNumber = 0;

      for (n = 1; n<=number; n++)
        triangularNumber += n;

      printf ("Triangular number %i is %i\n\n", number, triangularNumber);
  }
  
  return 0;
}
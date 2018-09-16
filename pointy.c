//Jason Kim
//System Level Programming -- Pd.6
//Work#02 -- Get to the point.
//9-15-18

#include <stdio.h>
#include <stdlib.h>

int main() {

  unsigned int integer = 2345345345;
  char *pointer = &integer;

  printf("integer in hex: %x\n\n", integer);

  for (int i = 0; i < 4; i++) {
    printf("byte %d: %hhx\n", i, *pointer);
    pointer++;
  }

  printf("\n");
  pointer = &integer;

  for (int ii = 0; ii < 4; ii++) {
    *pointer += 1;
    printf("increment(1) %d: %x, %d\n", ii, *pointer, *pointer);
    pointer++;
  }

  printf("\n");
  pointer = &integer;
  
  for (int iii = 0; iii < 4; iii++) {
    *pointer += 16;
    printf("increment(16) %d: %x, %d\n", iii, *pointer, *pointer);
    pointer++;
  }

  return 0;
}

#include "interface.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <number1> <number2> ...\n", argv[0]);
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    rearrangeDigits(num);
  }

  return 0;
}

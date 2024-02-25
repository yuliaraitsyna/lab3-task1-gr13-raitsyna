#include "interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b) { return (*(char *)b - *(char *)a); }

void rearrangeDigits(int num) {
  char str[20];
  sprintf(str, "%d", num);
  qsort(str, strlen(str), sizeof(char), cmpfunc);
  printf("%s\n", str);
}

#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

void alphabet_sort(char value[] , int length) {
  char swap;
  for (int i = 0; i < length; i++) {
    for (int x = i + 1; x < length; x++) {
      if ((int)value[i] > (int)value[x]) {
        swap = value[i];
        value[i] = value[x];
        value[x] = swap;
      }
    }
  }
}
int main() {
  char arr[10] = {'s', 'g', 'r', 'j', 'e', 'r', 'y', 'q', 'y', 'p'};
  int length = sizeof(arr) / sizeof(char);
  alphabet_sort(arr , length);
  for (int i = 0; i < 10; i++) {
    printf(" %c ", arr[i]);
  }
  return 0;
}



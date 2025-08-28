#include <stdio.h>

int main() {
  int num = 42323232;
  char *ptr;

  // Point ptr to the address of num
  ptr = (char *)&num;

  printf("Pointer value: %p\n", (void *)ptr);
  printf("Pointer value p+1: %p\n", (void *)(ptr + 1));
  printf("value: %c\n", *ptr);
  printf("value p+1: %c\n", *(ptr + 1));

  // Dereferencing ptr here would access the bytes of num
  return 0;
}

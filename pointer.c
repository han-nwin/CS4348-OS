#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  // int32_t x = 351;
  // int32_t *p; // p is a pointer to a int
  // p = &x;     // p now contains the addr of x
  //
  // printf("&x is %p\n", &x);
  // printf(" p is %p\n", p);
  // printf(" x is %d\n", x);
  //
  // *p = 333; // change the value of x
  // printf(" x is %d \n", x);
  //
  // return EXIT_SUCCESS;
  int x = 1;
  int arr[3] = {2, 3, 4};
  int *p = &arr[1];
  int *k = p + 1;

  printf("&x: %p; x: %d\n", &x, x);
  printf("&arr[0]: %p; arr[0]: %d\n", &arr[0], arr[0]);
  printf("&arr[2]: %p; arr[2]: %d\n", &arr[2], arr[2]);
  printf("&p: %p; p: %p; *p: %d\n", &p, p, *p);
  printf("&k: %p; k: %p; *k: %d\n", &k, k, *k);

  return EXIT_SUCCESS;
}

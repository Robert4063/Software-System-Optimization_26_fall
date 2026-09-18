// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define PRINT_TYPE_AND_POINTER(type)                          \
  do {                                                        \
    printf("size of %s : %zu bytes\n", #type, sizeof(type));    \
    printf("size of %s* : %zu bytes\n", #type, sizeof(type*));  \
  } while (0)

int main(void) {
  typedef struct {
    int id;
    int year;
  } student;

  student you = {12345, 4};
  int x[5];

  PRINT_TYPE_AND_POINTER(int);
  PRINT_TYPE_AND_POINTER(short);
  PRINT_TYPE_AND_POINTER(long);
  PRINT_TYPE_AND_POINTER(char);
  PRINT_TYPE_AND_POINTER(float);
  PRINT_TYPE_AND_POINTER(double);
  PRINT_TYPE_AND_POINTER(unsigned int);
  PRINT_TYPE_AND_POINTER(long long);
  PRINT_TYPE_AND_POINTER(uint8_t);
  PRINT_TYPE_AND_POINTER(uint16_t);
  PRINT_TYPE_AND_POINTER(uint32_t);
  PRINT_TYPE_AND_POINTER(uint64_t);
  PRINT_TYPE_AND_POINTER(uint_fast8_t);
  PRINT_TYPE_AND_POINTER(uint_fast16_t);
  PRINT_TYPE_AND_POINTER(uintmax_t);
  PRINT_TYPE_AND_POINTER(intmax_t);
  PRINT_TYPE_AND_POINTER(__int128);
  printf("size of x : %zu bytes\n", sizeof(x));
  printf("size of &x : %zu bytes\n", sizeof(&x));
  printf("size of student : %zu bytes\n", sizeof(you));
  printf("size of student* : %zu bytes\n", sizeof(&you));

  return 0;
}

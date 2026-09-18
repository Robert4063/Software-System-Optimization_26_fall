// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[]) {  // argv is adjusted to char **.
  int i = 5;
  // The & operator here gets the address of i and stores it into pi
  int * pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  int j = *pi;

  char c[] = "6.172";
  char * pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // Prints the first character: 6.

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char ** pcp;
  pcp = argv;  // Both operands have type char **.

  const char * pcc = c;  // pcc is a pointer to char constant
  char const * pcc2 = c;  // Pointer to const char, just like pcc.

  // For each of the following, why is the assignment:
  // *pcc = '7';  // Invalid: the pointed-to char is const through pcc.
  pcc = *pcp;  // Valid: pcc itself is mutable; char * converts to const char *.
  pcc = argv[0];  // Valid for the same reason.

  char * const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  // cp = *pcp;  // Invalid: cp itself is a const pointer.
  // cp = *argv;  // Invalid: cp cannot be reassigned.
  *cp = '!';  // Valid: the char pointed to by cp is not const.

  const char * const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  // cpc = *pcp;  // Invalid: cpc itself is a const pointer.
  // cpc = argv[0];  // Invalid: cpc cannot be reassigned.
  // *cpc = '@';  // Invalid: the pointed-to char is also const through cpc.

  return 0;
}

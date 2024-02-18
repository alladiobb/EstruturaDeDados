#include <stdio.h>
#include <malloc.h>


int main(int argc, char const *argv[])
{
 int* y = (int*) malloc(sizeof(int));
  *y =10;
  int z = sizeof(char);
  printf("*y=%i z=%i\n", *y, z);
  return 0;
}
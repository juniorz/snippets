#include <stdio.h>
#include "lib/maths.h"

int main(int argc, char* argv[])
{
  double first, second, value;
  first = 3.75;
  second = 8.13;
  
  value = mean(first, second);
  
  printf("A media de %3.2f e %3.2f = %3.2f\n", first, second, value);

  return 0;
}

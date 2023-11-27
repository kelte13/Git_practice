#include <math.h>

int* squareOrSquareRoot(int* array, int length)
{
  for (int i = 0; i < length; i++) {
    if ((int) sqrt(array[i]) == sqrt(array[i])) {
      array[i] = sqrt(array[i]);
    }
    else {
       array[i] = array[i]*array[i];
    }
  }

  return array;
}

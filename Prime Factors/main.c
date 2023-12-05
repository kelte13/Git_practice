#include <math.h>
int prime_factors (unsigned long long n, unsigned long long factors[])
{
	// fill factors[], return the number of factors
  int count = 0;
  int i = 0;
  if (n == 1) {
      return 0;
  }
  while (n%2 == 0 || n%3 == 0 || n == 1) {
    if (n%2 == 0) {
      factors[i] = 2;
      n/=2;
      count++;
      i++;
    }
    else if (n%3 == 0) {
      factors[i] = 3;
      n/=3;
      count++;
      i++;
      }
    if (n == 1) {
      return count;
    }
  }
    for (unsigned long long j = 5; j < sqrt(n); j+=2) {
      while (n%j == 0) {
        factors[i] = j;
        n/=j;
        count++;
        i++;
      }
      if (n == 1) {
        return count;
      }
    }

  factors[i++] = n;
  return ++count;
}
//https://www.codewars.com/kata/542f3d5fd002f86efc00081a/train/c

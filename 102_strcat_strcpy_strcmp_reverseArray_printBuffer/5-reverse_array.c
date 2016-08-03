#include <stdio.h>

void print_array(int*a, int n);

void reverse_array(int *a, int n)
{
  int i, s;
  for (i = 0, n -= 1; i < n; i++, n--)
  {
    s = *(a + i); /* Stores front char */
    *(a + i) = *(a + n); /* Moves end char to front */
    *(a + n) = s; /* Moves front char to end */
  }
  return;
}

void print_array(int*a, int n) {
  int i;
  for (i=0; i<n; i++) {
    printf("%d ", a[i]);
  }
}

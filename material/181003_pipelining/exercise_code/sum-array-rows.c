#include <stdlib.h>
#include <stdio.h>

#define BAD_INPUT 0

long sum_array_rows(long *a, int M, int N)
{
  int i, j, sum = 0;

  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      sum += a[i * M + j];
    }
  }
  return sum;
}

int main (int argc, char* argv[]) {
  int n,m; // Array size
  if (argc != 3) { // 2 argument
    printf("I want two ints as arguments!\n");
    return EXIT_SUCCESS;
  }
  int res;
  res = sscanf(argv[1],"%d", &m);
  if (res == BAD_INPUT) {
    printf("I want two ints as arguments!\n");
    return EXIT_SUCCESS;
  }
  res = sscanf(argv[1],"%d", &n);
  if (res == BAD_INPUT) {
    printf("I want two ints as arguments!\n");
    return EXIT_SUCCESS;
  }

  // Give me some memory with the size of the array
  long* input = (long*) malloc(m * n * sizeof(long));
  // Note, I do not care about the input

  sum_array_rows(input, m, n);

  // Give the memory back
  free(input);

  return EXIT_SUCCESS;
}
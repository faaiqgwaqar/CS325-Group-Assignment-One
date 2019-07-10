#include "algorithm_one.h"
#include "algorithm_two.h"
#include "algorithm_three.h"
#include "structure.h"
int main(){

  clock_t t;
  struct dynArr array;
  int maxTest;
  double time_taken;

  dynArrGenerator(&array);
  dynArrPrint(&array);

  t = clock();
  maxTest = enumerationMaxSubarray(&array);
  t = clock() - t;
  time_taken = ((double)t)/ CLOCKS_PER_SEC;

  printf("\n\nEnumeration Result is :%d\n", maxTest);
  printf("Total Time Taken by CPU: %f seconds\n", time_taken);

  t = clock();
  maxTest = betterEnumerationMaxSubarray(&array);
  t = clock() - t;
  time_taken = ((double)t)/ CLOCKS_PER_SEC;

  printf("\n\nBetterEnum Result is :%d\n", maxTest);
  printf("Total Time Taken by CPU: %f seconds\n", time_taken);

  t = clock();
  maxTest = dynamicProgMaxSubarray(&array);
  t = clock() - t;
  time_taken = ((double)t)/ CLOCKS_PER_SEC;

  printf("\n\nDynProg Result is :%d\n", maxTest);
  printf("Total Time Taken by CPU: %f seconds\n\n\n", time_taken);

  freeDynArr(&array);
  return 0;
}

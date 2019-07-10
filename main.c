#include "algorithm_one.h"
#include "algorithm_two.h"
#include "algorithm_three.h"
#include "structure.h"

int main(){
  struct dynArr array;
  int maxTest;
  dynArrGenerator(&array);
  dynArrPrint(&array);
  maxTest = enumerationMaxSubarray(&array);
  printf("\n\nEnumeration Result is :%d\n", maxTest);
  maxTest = betterEnumerationMaxSubarray(&array);
  printf("\n\nBetterEnum Result is :%d\n", maxTest);
  maxTest = dynamicProgMaxSubarray(&array);
  printf("\n\nDynProg Result is :%d\n\n\n", maxTest);
  freeDynArr(&array);
  return 0;
}

#include "algorithm_one.h"
#include "algorithm_two.h"
#include "algorithm_three.h"
#include "structure.h"

int main(){
  struct dynArr array;
  int maxTest;
  dynArrGenerator(&array);
  dynArrPrint(&array);
  maxTest = dynamicProgMaxSubarray(&array);
  printf("\n\nDynProg Result is :%d\n\n", maxTest);
  maxTest = betterEnumerationMaxSubarray(&array);
  printf("\n\nBetterEnum Result is :%d\n\n", maxTest);
  freeDynArr(&array);
  return 0;
}

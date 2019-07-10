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
  printf("\n\nMax is :%d\n\n", maxTest);
  return 0;
}

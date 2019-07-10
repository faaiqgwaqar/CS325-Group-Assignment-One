#include "algorithm_three.h"
#include "structure.h"

int dynamicProgMaxSubarray(struct dynArr *da){
  int maxSum = 0;
  int prevSum = 0;
  int currentSum;
  int i;
  for(i = 0; i < da->size; i++){
    currentSum = da->data[i] + prevSum;
    if(currentSum > da->data[i])
      prevSum = currentSum;
    else
      prevSum = da->data[i];

    if(prevSum > maxSum)
      maxSum = prevSum;
  }
  return maxSum;
}

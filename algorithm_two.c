#include "algorithm_two.h"
#include "structure.h"

int betterEnumerationMaxSubarray(struct dynArr *da){
  int i;
  int j;
  int sum;
  int maxSum = 0;
  for(i = 0; i < da->size; i++){
    sum = 0;
    for(j = i; j < da->size; j++){
      sum += da->data[j];
      if(sum > maxSum)
        maxSum = sum;
      }
    }
    return maxSum;
  }

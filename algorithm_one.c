#include "algorithm_one.h"
#include "structure.h"

int enumerationMaxSubarray(struct dynArr *da){
    int i;
    int j;
    int k;
    int sum;
    int maxSum = 0;
    for(i = 0; i < da->size; i++){
      for(j = i; j < da->size; j++){
        sum = 0;
        for(k = i; k < j; k++){
          sum += da->data[k];
        }
        if(sum > maxSum)
          maxSum = sum;
      }
    }
    return maxSum;
}

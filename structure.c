#include "structure.h"

void initDynArr(struct dynArr *da, int newCapacity){
  assert(newCapacity >= 0);
  da->capacity = newCapacity;
  da->size = 0;
  da->data = (int*) malloc(sizeof(int)*newCapacity);
  assert(da->data);
}

void addDynArr(struct dynArr *da, int val){
  if(da->size >= da->capacity)
    _dynArrDoubleCapacity(da);
  da->data[da->size] = val;
  da->size++;
}

void freeDynArr(struct dynArr *da){
  assert(da);
  free(da->data);
  da->capacity = 0;
  da->size = 0;
}

void _dynArrDoubleCapacity(struct dynArr *da){
  int *oldBuffer = da->data;
  int oldSize = da->size;
  int i;
  initDynArr(da, 2 * da->capacity);
  for(i = 0; i < oldSize; i++)
    da->data[i] = oldBuffer[i];
  da->size = oldSize;
  free(oldBuffer);
}

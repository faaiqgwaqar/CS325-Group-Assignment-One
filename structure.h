#ifndef WAQARF_STRUCTURE_H
#define WAQARF_STRUCTURE_H

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dynArr {
    int* data;
    int size;
    int capacity;
} dynArr;

void initDynArr(struct dynArr *da, int newCapacity);
void addDynArr(struct dynArr *da, int val);
void freeDynArr(struct dynArr *da);
void _dyArrDoubleCapacity(struct dynArr *da);

#endif

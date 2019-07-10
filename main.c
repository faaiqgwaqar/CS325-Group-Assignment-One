#include "structure.h"

int main(){
  struct dynArr array;
  dynArrGenerator(&array);
  dynArrPrint(&array);
  return 0;
}

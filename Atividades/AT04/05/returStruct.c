#include "head.h"

Values returStruct(Values valueVariable){
   valueVariable.Value1++;
   valueVariable.Value2=valueVariable.Value1*6;
   valueVariable.Value3++;
   valueVariable.Value4++;

   return valueVariable;
}
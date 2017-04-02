#include "opcodeTable.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Tree buildOpcodeTable(FILE *op)
{
  char ins[instruction];
  int code, form;
  Tree *left_node;
  Tree *right_node;

  /*while(!(feof(op)))
  {
    fscanf("%s %d %d", ins, &code, &form);

  }*/
  
}
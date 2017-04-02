#include "opcodeTable.h"


Tree buildOpcodeTable(FILE *op)
{
  char ins[instruction];
  int code, form;

	fscanf("%s %d %d", ins, &code, &form);
	Tree tree;
	Tree newTree;
	strcpy(newTree.symbol, ins);
	newTree.opcode =code;
	newTree.format = form;
	
	
  while(!(feof(op)))
  {
	  fscanf("%s %d %d", ins, &code, &form);
	  strcpy(tree.symbol, ins);
	  tree.opcode = code;
	  tree.format = form;
	  insert(tree, newTree);
	  
  }
  
}
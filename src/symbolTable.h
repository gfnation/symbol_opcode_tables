#include "library.h"
#define BUFFER 11
typedef struct symTable Table;
struct symTable 
{
	char symbol[BUFFER];
	int LC_Value;
};

void insert(Table ins, char sym[BUFFER], int lc);

void symbolTable(FILE *in);
#define instruction 6 //Max instruction length will be 5 space for '\0'
#include "library.h"

typedef struct tree Tree;
struct tree
{
    char symbol[instruction];
    int opcode;
    int format;
    Tree *left;
    Tree *right;
};

void opcodeTable(FILE *in);
int height(Tree tree);

void insert(Tree ins, Tree full);
int getOpcode(char instruct[], Tree opTree);
int getFormat(char instruct[], Tree opTree);
void toString(Tree contents);


#define instruction 5 //Max instruction length will be 5
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct tree Tree;
struct tree
{
    char symbol[instruction];
    int opcode;
    int format;
    Tree *left;
    Tree *right;
};


void insert(Tree ins, Tree full);
int getOpcode(char instruct[], Tree opTree);
int getFormat(char instruct[], Tree opTree);
void toString(Tree contents);

void opcodeTable(FILE *in);
Tree buildOpcodeTable(FILE *op);

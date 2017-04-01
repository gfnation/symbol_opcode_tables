#define instruction 5 //Max instruction length will be 5

typedef struct
{
    char symbol[instruction];
    int opcode;
    int format;
    Tree *left;
    Tree *right;
}Tree;

void insert();
int getOpcode(char instruct[]);
int getFormat(char instruct[]);
void toString(Tree contents);
void opcodeTable(FILE *in);

#include "opcodeTable.h"
#include "buildOpcodeTable.h"
#define FIRST 0
void opcodeTable(FILE *in)
{
    Tree opTree;
    opTree = buildOpcodeTable(in);
	fprintf(stdout, "%d", height(opTree));

}

int height(Tree tree)
{ 
	if(tree.right == NULL && tree.left == NULL)
	{
		return 0;	
	}
	else
	{
		int left_height = 0;
		int right_height = 0;
		if(tree.right != NULL)
		{
			right_height = height(*(tree).right);
		}
		if(tree.left != NULL)
		{
			left_height = height(*(tree).left);
		}
		
		
		if(left_height > right_height)
		{
			return 1 + left_height;
		}
		else
		{
			return 1 + right_height;
		}

	}

}

void insert(Tree ins, Tree full)
{
    //Base cases. If there are no right or left symbols place in correct area
    if(full.left == NULL && full.right == NULL)
    {
        if(ins.symbol[FIRST] > full.symbol[FIRST])
        {
			
            //If the first symbol is greater than the first symbol in the tree.
            *(full).right = ins;
        }
        else if(ins.symbol[FIRST] < full.symbol[FIRST])
        {
            *(full).left = ins;
        }
        else
        {
            int len = strlen(full.symbol);
            int loop =1;
            for(; loop < len; loop++)
            {
                if(ins.symbol[loop] > full.symbol[loop])
                {
                    *(full).right = ins;
                    loop = len;
                }
                if(ins.symbol[loop] < full.symbol[loop])
                {
                    *(full).left = ins;
                    loop = len;
                }
            }
            if(loop == len && (full.right == NULL && full.left == NULL))
            {
                *(full).right = ins;
            }
        }
    }
    else if(full.left == NULL && (ins.symbol[FIRST] < full.symbol[FIRST]))
    {
        *(full).left = ins;
    }
    else if(full.right == NULL && (ins.symbol[FIRST] < full.symbol[FIRST]))
    {
        *(full).right = ins;
    }
    //Recursion 
    else
    {
        if(ins.symbol[FIRST] >= full.symbol[FIRST])
            insert(ins, *(full).right);
        else
            insert(ins, *(full).left);
    }
}

int getOpcode(char instruct[], Tree opTree)
{
    if(strcmp(instruct, opTree.symbol)==0)
        return opTree.opcode;
    else if(instruct[FIRST] >= opTree.symbol[FIRST])
        getOpcode(instruct, *(opTree).right);
    else
        getOpcode(instruct, *(opTree).left);
}

int getFormat(char instruct[], Tree opTree)
{
    if(strcmp(instruct, opTree.symbol)== 0)
    {
        return opTree.format;
    }
    else if(instruct[FIRST] >= opTree.symbol[FIRST])
    {
        getFormat(instruct, *(opTree).right);
    }
    else
    {
        getFormat(instruct, *(opTree).left);
    }
}

void toString(Tree contents)
{

}
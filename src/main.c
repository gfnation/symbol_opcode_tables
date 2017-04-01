#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "opcodeTable.h"
#include "symbolTable.h"
#define ASCII_To_INT 48

int main(int argc, char *argv[])
{

	if( argc != 4)
	{
		printf("The number of command line arguments entered is incorrect.");
		exit(1);
	}
	
	int size1 = strlen(argv[1]);
	int size2 = strlen(argv[2]);
	int size3 = strlen(argv[3]);
	
	//instruction_set is the opcode file.  
	char instruction_set[size1];
	char program_file[size2];
	char hashtable_size[size3];
	
	strcpy(instruction_set, argv[1]);
	strcpy(program_file, argv[2]);
	strcpy(hashtable_size, argv[3]);
	
	instruction_set[size1] = '\0';
	program_file[size2] = '\0';
	hashtable_size[size3] = '\0';

	int h_size =0;
	int decimal =1;
	int current =0;
	int i = size3 - 1;
	for(; i>=0 ; i--)
	{
		current = decimal * (hashtable_size[i]-ASCII_To_INT);
		h_size = h_size +current;
		decimal = decimal *10;
	}

	FILE *i_file;
	FILE *p_file;
	
	if ((i_file = fopen(instruction_set, "r")) ==NULL)
	{
		printf("The instruction file could not be open.\n");
		exit(1);
	}
	
	if ((p_file = fopen(program_file, "r")) == NULL)
	{
		printf("The program file could not be opened.\n");
		exit(1);
	}
	
	symbolTable(p_file);
	opcodeTable(i_file); 
	

	
	return 0;
}
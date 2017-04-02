firstpass: main.o hashFunction.o buildOpcodeTable.o buildSymbolTable.o opcodeTable.o symbolTable.o
	gcc main.o hashFunction.o buildOpcodeTable.o buildSymbolTable.o opcodeTable.o symbolTable.o -o firstpass
main.o: main.c
	gcc -c main.c
hashFunction.o: hashFunction.c
	gcc -c hashFunction.c
buildOpcodeTable.o: buildOpcodeTable.c
	gcc -c buildOpcodeTable.c
buildSymbolTable.o: buildSymbolTable.c
	gcc -c buildSymbolTable.c
opcodeTable.o: opcodeTable.c
	gcc -c opcodeTable.c
symbolTable.o: symbolTable.c
	gcc -c symbolTable.c
clean:
	rm *.o
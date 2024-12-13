/*
	Degenerate Software Foundation

*/
#include <stdio.h>
#include "../header/io.h"
#include "../header/token.h"
#include "../header/vm/mem.h"

int main(int argc, char *argv[]){

	printf("MikuCC Compiler 0.01\n");
	printf("Alocating initial 5KB");

	struct Mem mem = mccNewMem(5000);

}

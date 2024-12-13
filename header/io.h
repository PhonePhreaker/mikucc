#ifndef MCC_IO
#define MCC_IO

#include <stdlib.h>
#include <stdio.h>
#include "vm/mem.h"

#define CHAR_QUANT_BLOCK 20

struct BoxStore {
	
	struct Mem *content;
	//char content[CHAR_QUANT_BLOCK];
	struct BoxStore *next;
	struct BoxStroe *first;
};

struct Box {
	struct BoxStore *ptr;
	int box_quant;
	char log[20];
};

struct String {
	struct Box content;
	int len;
	char log[20];
};

struct StringPtr {
	char *ptr;
	int len;
	char log[20];
};

int mccStrcpLog(char buffer[20], char *cp); 

struct String *mccNewStringSafe(char *val);

struct Box *mccNewBox(size_t size);

struct String *mccNewString(char *val);
#endif 

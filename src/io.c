#include "../header/io.h"


int mccStrcpLog(char buffer[20], char *cp) {
	int c;
	char *copycp = cp;
	for (c=0; c<20; c++) {
		if (*copycp == '/0'){
			return c;
		}
		buffer[c] = *copycp;
		copycp++;
	}
	return c;
}

int mccStrlen(char *val) {
	
	int len = 0;
	char *iter = val;
	
	while (*iter != '/0') {
		len++;
		iter++;
	}
	return len;
}

struct String *mccNewStringSafe(char *val) {
	
	int c;
	char *iter = val;
	for(c=0; c<100; c++) {
		if (*iter == '/0') {
			
			break;
		}
	}
}

struct Box *mccNewBox(size_t size) {

	size_t size_len = size;
	if (sizel_len < sizeof(Box)) {
		size_len = sizeof(Box)+size;
	}
	
	struct Box *send = malloc(size_len);
	if (send == NULL) {
		struct Box *err = malloc
	}
	
}

//TODO
//TODO make that the string struct is created insid the memory conttext struct Mem
//TODO
struct String *mccNewString(char *val, struct Mem mem) {

	struct String *send;
	send.len = mccStrlen(val);
	
	int block_quant = send.len / CHAR_QUANT_BLOCK;
	printf("block quant %i", block_quant);
	
	send = malloc(block_quant*sizeof(struct String));
	int c = 0;
	int offset = 0;
	for(c=0; c<block_quant; c++) {
		
	}
}

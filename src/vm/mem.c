#include "../../header/vm/mem.h"
#include "../../header/io.h"


void *mccPushStructMem(struct Mem mem, struct Types push) {
	
	

}

//BASIC MEM STACK OPERATIONS
int mccPushMem(struct Mem mem, struct Types type, void *ptr){
	
	mem
}

void *mccPopMem(struct Mem mem){
	
}

struct Types mccCpMem(struct Mem from, struct Mem to) {


}
//BASIC MEM STACK OPERATIONS


struct Types mccNewTypes(size_t size_bytes,int type, int array) {

	struct Types send;
	send.size_bytes = size_bytes;
	send.type = type;
	send.array = array;
	send.complete = MIKUCC_FALSE;
	return send;
}

struct MemContext mccNewMemContext(size_t size, size_t type_quant, int init_type){
	
	struct MemContext send;
	send.begin = (char *) malloc(size);
	send.end = send.begin + size;
	send.types = mccNewTypes(type_quant, init_type, MIKUCC_FALSE);
	send.size = size;
	return send;
}

struct Mem mccNewMem(size_t size, char log[20]) {
	
	struct Mem send;
	send.main = mccNewMemContext(size, size, MIKUCC_CHAR);
	send.metadata = mccNewMemContext(size, type_quant, MIKUCC_CHAR);
	send.log = mccStrcpLog(log, &send.log);
	
}

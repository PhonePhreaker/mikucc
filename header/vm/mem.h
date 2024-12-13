/*	MikuVM, engine which will prevent memory leaks 
	Degenerate Software Foundation
	
	WARNING as of now these structs are not thread safe pls use them synchronously 
	
*/
#ifndef MIKUCC_MEM
#define MIKUCC_MEM

#define MIKUCC_FALSE 0
#define MIKUCC_TRUE 1 

#define MIKUCC_CHAR 0
#define MIKUCC_STR 1
#define MIKUCC_U8 2
#define MIKUCC_U32 3
#define MIKUCC_U64 4
#define MIKUCC_TYPE_LIMIT 10

//Define datatypes in MemContext
//size_bytes :the syze of the type in bytes
//*index  :the ptr  inside memory malloc by Mem
//*next, *first : part of the chain stored in the metadata MemContext
//type  :the type id that can be converted into a string they are related to the MIKUCC_CHAR macro for example
//array :a bool that says if the type is an array
//complete :a bool that says if the struct is completely built 
	struct Types {
		int complete;
		size_t size_bytes;
		int type;
		int array; 
		char *index;
		struct Types *next;
		struct Types *first;
	};
//Kinda like virtual pages this will hold
	
	struct MemContext {
		char *begin;
		char *end;
		char *stack_ptr;
		struct Types types;
		size_t size;
		
	};
	
	struct Mem {
		struct MemContext main;
		struct MemContext metadata;
		char log[20];
	};
	
//BASIC MEM STACK OPERATIONS
	int mccPushMem(struct Mem mem, struct Types type,  void *ptr);

	void *mccPopMem(struct Mem mem);

	struct Types mccCpMem(struct Mem from, struct Mem to);
//BASIC MEM STACK OPERATIONS 

	struct Types mccNewTypes(size_t size_bytes,int type, int array);

	struct MemContext mccNewMemContext(size_t size);
	
	void *mccPushStructMem(struct Mem mem, struct Types push);
	
	struct Mem mccNewMem(size_t size);
	
	int mccMemPush(struct Mem mem, struct Types push);
	
#endif 	

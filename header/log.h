#ifndef MIKUCC_LOG 
#define MIKUCC_LOG 

#include "io.h"

struct Log {
	struct String name;
	struct Box pool;
	struct Box tags; 
	

};

struct Log mccNewLog();

#endif 

#ifndef MIKUCC_TOKEN
#define MIKUCC_TOKEN

#include <stdio.h>


struct Input {
	struct Box content;
};

struct Token {
	char source_content[20];
	int token_type;
};

struct Token mccParse(struct Input input);
struct Input mccNewInput(char *path_file);


#endif 

#
# Degenerate Software Foundation
#main: io.o, mem.o, main.c
#	gcc -Wall -m64 src/main.c io.o mem.o -o target/mikucc

io.o: src/io.c
	gcc -Wall -m64 src/io.c -o io.o 

mem.o: src/vm/mem.c
	gcc -Wall -m64 src/vm/mem.c -o mem.o

main: io.o, mem.o, main.c
	gcc -Wall -m64 src/main.c io.o mem.o -o target/mikucc




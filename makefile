prog: prog.c
	gcc -o prog.o prog.c -lwayland-client -lcairo

#include "lib.h"

main()
{
	char program[12800];
	setup();

	readfile("phi",program);
    executeprogrambackground(program,12800);

	readfile("phow",program);
    executeprogrambackground(program,12800);
	
	readfile("pbye",program);
	executeprogrambackground(program,12800);
	
	exit();
}

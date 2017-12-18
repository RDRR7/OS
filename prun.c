#include "lib.h"
#include "scheduler.h"

main()
{
	char program[12800];
	set_scheduler(PRIORITY);
	
	setup();

	readfile("phi",program);
    executeprogrambackground(program,12800);

	readfile("phow",program);
    executeprogrambackground(program,12800);
	
	readfile("pbye",program);
	executeprogrambackground(program,12800);

	exit();
}

#include "lib.h"
#include "scheduler.h"

main()
{
	char program[12800];
	set_scheduler(ROUND_ROBIN_PRIORITY);
	
	setup();

	readfile("phi",program);
    executeprogrambackground(program,12800,'b');

	readfile("phow",program);
    executeprogrambackground(program,12800,'a');
	
	readfile("pbye",program);
	executeprogrambackground(program,12800,'c');

	exit();
}

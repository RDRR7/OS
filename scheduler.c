#include "scheduler.h"

int scheduler=FIFO;

void set_scheduler(int _scheduler)
{
	scheduler=_scheduler;
}

int get_scheduler()
{
	return scheduler;
}
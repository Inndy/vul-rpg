#include <string.h>
#include <stdint.h>
#include <stdio.h>

#include "game_func.h"

const size_t BAR_SIZE = 20;

void show_bar(const char *name, int val, int val_max)
{
	int relative = val * BAR_SIZE / val_max;
	char bar[256] = { 0 };
	memset(bar, '.', BAR_SIZE);
	memset(bar, '=', relative);
	printf("> %4s [%s] <%3d%%> (%3d / %3d)\n", name, bar, 100 * val / val_max, val, val_max);
}

#include "main.h"

/**
 * get_sigint - Handle the crtl and call in prompt
 * @sig: Signal handler
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

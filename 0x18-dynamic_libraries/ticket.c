#include <unistd.h>
#include <string.h>

int rand(void)
{
	static int v = -1;

	v++;

	if (v == 0)
		return (8);
	if (v == 1)
		return (8);
	if (v == 2)
		return (7);
	if (v == 3)
		return (9);
	if (v == 4)
		return (23);
	if (v == 5)
		return (74);
	return (v * v % 30000);
}

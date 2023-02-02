#include "main.h"
#include <stdint.h>

int get_endianness(void)
{
	uint32_t i = 1;
	char *c = (char *) &i;
	 return (int) (*c);
}

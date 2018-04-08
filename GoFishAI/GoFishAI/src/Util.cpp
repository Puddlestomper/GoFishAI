#include "Util.h"

float P(short size, short num, short draws)
{
	float not = 1;
	for (float i = size; i > size - draws; --i) not *= (i - num) / i;
	return 1 - not;
}
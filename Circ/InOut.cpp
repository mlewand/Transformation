
#include "./InOut.h"
#include <cmath>

float TransformationCircInOut::ease(float t, float b, float c, float d)
{
	if ((t /= d / 2) < 1)
		return -c / 2 * (sqrt(1 - t * t) - 1) + b;
	return c / 2 * (sqrt(1 - (t -= 2) * t) + 1) + b;
}

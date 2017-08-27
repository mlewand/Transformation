
#include "./InOut.h"

float TransformationQuadInOut::ease(float t, float b, float c, float d)
{
	if ((t /= d / 2) < 1)
	{
		return c / 2 * t * t + b;
	}

	return -c / 2 * ((--t) * (t - 2) - 1) + b;
}

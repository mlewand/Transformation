
#include "./InOut.h"

float TransformationCubicInOut::ease(float t, float b, float c, float d)
{
	if ((t /= d / 2) < 1)
	{
		return c / 2 * t * t * t + b;
	}

	return c / 2 * ((t -= 2) * t * t + 2) + b;
}

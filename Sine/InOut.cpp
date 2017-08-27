
#include "./InOut.h"
#include <math.h>

float TransformationSineInOut::ease(float t, float b, float c, float d)
{
	return -c / 2 * (cos(M_PI * t / d) - 1) + b;
}

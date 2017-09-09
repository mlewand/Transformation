
#include "./Out.h"
#include <cmath>

float TransformationSineOut::ease(float t, float b, float c, float d)
{
	return c * sin(t / d * (M_PI / 2)) + b;
}

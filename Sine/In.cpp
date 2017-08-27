
#include "./In.h"
#include <math.h>

float TransformationSineIn::ease(float t, float b, float c, float d)
{
	return -c * cos(t / d * (M_PI / 2)) + c + b;
}

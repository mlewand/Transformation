
#include "./In.h"

float TransformationCubicIn::ease(float t, float b, float c, float d)
{
	return c * (t /= d) * t * t + b;
}

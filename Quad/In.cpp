
#include "./In.h"

float TransformationQuadIn::ease(float t, float b, float c, float d)
{
	return c * (t /= d) * t + b;
}

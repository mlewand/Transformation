
#include "./In.h"

float TransformationQuartIn::ease(float t, float b, float c, float d)
{
	return c * (t /= d) * t * t * t + b;
}

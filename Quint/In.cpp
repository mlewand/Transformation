
#include "./In.h"


float TransformationQuintIn::ease(float t, float b, float c, float d)
{
	return c * ( t /= d ) * t * t * t * t + b;
}

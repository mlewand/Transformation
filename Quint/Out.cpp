
#include "./Out.h"


float TransformationQuintOut::ease(float t, float b, float c, float d)
{
	return c * ( ( t = t / d - 1 ) * t * t * t * t + 1 ) + b;
}

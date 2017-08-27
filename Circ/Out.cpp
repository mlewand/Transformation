
#include "./Out.h"
#include <math.h>

float TransformationCircOut::ease(float t, float b, float c, float d)
{
	return c * sqrt( 1 - ( t = t / d - 1 ) * t ) + b;
}

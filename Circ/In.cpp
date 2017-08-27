
#include "./In.h"
#include <math.h>

float TransformationCircIn::ease(float t, float b, float c, float d)
{
	return -c * ( sqrt( 1 - ( t /= d ) * t ) - 1 ) + b;
}

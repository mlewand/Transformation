
#include "./Out.h"


float TransformationQuadOut::ease(float t, float b, float c, float d)
{
	return -c * ( t /= d ) * ( t - 2 ) + b;
}

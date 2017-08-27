
#include "./Out.h"
#include <math.h>

float TransformationExpoOut::ease(float t, float b, float c, float d)
{
	return (t == d) ? b + c : c * (-pow(2, -10 * t / d) + 1) + b;
}

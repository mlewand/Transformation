
#include "./In.h"
#include <math.h>

float TransformationExpoIn::ease(float t, float b, float c, float d)
{
	return (t == 0) ? b : c * pow(2, 10 * (t / d - 1)) + b;
}

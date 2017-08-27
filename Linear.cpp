
#include "./Linear.h"

float TransformationLinear::ease(float t, float b, float c, float d)
{
	return (t / d) * (b + c) + b;
};